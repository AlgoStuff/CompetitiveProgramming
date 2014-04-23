t = input()
while t:
	res = 0
	a = []
	n,k = [int(x) for x in raw_input().split()]
	
	for x in range(0,n):
		s = raw_input()
		c = input()
		a.append(c)
	if k > 300:
		print(0)
		t-=1
		continue
	for x in range(0,n):
		for y in range(x+1,n):
			for z in range(y+1,n):
				if a[x] + a[y]+ a[z] == k:	
					res+=1 	
	print(res)
	t-=1				
