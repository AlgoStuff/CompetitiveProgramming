# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerrank.com/contests/countercode/challenges/degree-of-dirtiness
# Concept : AdHoc
# Reference : None

t=input()
while t:
	t-=1
	n,m = [int(x) for x in raw_input().split()]
	if n%2 == 0:
		d = (m/n)*n;
		if d < m:
			d=m/n+1
		else:
			d=m/n	
		r = m%n;
		f = 1
		b = n
		a = []
		while f<=n/2:
			a.append(f)
			a.append(b)
			f+=1
			b-=1
		if r == 0:
			print(n/2+1),
		else:	
			print(a[r-1]),
		print(d-1)		
	else:
		d = (m/n)*n;
		if d < m:
			d=m/n+1
		else:
			d=m/n	
		r = m%n;
		f = 1
		b = n
		a = []
		while f<=n/2:
			if d%2 == 0:
				a.append(b)
				a.append(f)
			else:	
				a.append(f)
				a.append(b)
			f+=1
			b-=1
		a.append(n/2+1)
		if r == 0:
			print(n/2+1),
		else:	
			print(a[r-1]),
		print(d-1)		