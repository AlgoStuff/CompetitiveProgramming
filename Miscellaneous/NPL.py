t = input()
while t:
	n = raw_input()
	a = [0]*10
	for x in n:
		a[int(x)]+=1
	res = 0
	for x in range(0,10):
		res +=  a[x]*x
	print(res)	
		
	t-=1
