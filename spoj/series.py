t=input()
while t:
	n=float(input())
	res=0.0
	while n:
		s=n*n+1	
		res+=n/(s-n)/(s+n)
		n-=1
	print("%.5f"%res)
	t-=1
