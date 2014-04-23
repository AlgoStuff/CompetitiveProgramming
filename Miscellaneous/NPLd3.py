def f(n):
	res = 1
	for x in range(1,n+1):
		res = ((res)*(x%1000000007))%1000000007
	return res	
n = input()
while n:
	a = [0]*10
	p = raw_input()
	num = 1
	l = len(p)
	for x in range(0,l):
		num = num*(x+1)
		a[int(x)]+=1
	
	for x in a:
		num = num / f(x)
	print((num)%1000000007)	
	n-=1
