t=input()
while t:
	t-=1
	n,k,m,w = [int(x) for x in raw_input().split()]
	a =  [int(x) for x in raw_input().split()]
	res = 1
	x = 0
	while x < n-k:
		for y in range(0,k):
			res = (res*a[x+y])
		res = pow(res,m)	
		if x+k < n:	
			x+=k
		else:	
			break
	x+=1
	while x < n:
		res*= a[x]
	print(res%w)	
			
			