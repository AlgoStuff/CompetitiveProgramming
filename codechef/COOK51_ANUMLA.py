t=input()
while t:
	t-=1
	n=input()
	nn = 2**n
	a = [int(x) for x in raw_input().split()]
	a.sort()
	res = []
	if n == 1:
		print(a[1])
	else:	
		for x in range(nn-2,nn-2-n,-1):
			res.append(a[nn-1]-a[x])
		res.sort()
		for x in res:
			print(x),
		print("")			