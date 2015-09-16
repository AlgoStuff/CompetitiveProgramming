t=input()
while t:
	n,k=[int(x) for x in raw_input().split()]
	print("%.6f"%((1.0-(1.0/n))* (1.0/(n-k-1)) ))
	t-=1