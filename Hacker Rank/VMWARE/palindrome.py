# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerrank.com/companies/vmware/challenges/palindrome-index
# Concept : AdHoc
# Reference : None

t=input()
while t:
	t-=1
	s=raw_input()
	l = len(s)
	b = 0
	e = l-1
	while b<=e:
		if s[b] != s[e]:
			break
		b+=1
		e-=1	
	if b>e:
		print(-1)
	else:
		tb=0
		te=l-1
		while tb<=te:
			if tb == b:
				tb+=1
			if s[tb]!=s[te]:
				break
			tb+=1
			te-=1	
		if tb>te:
			print(b)
		else:
			print(e)
