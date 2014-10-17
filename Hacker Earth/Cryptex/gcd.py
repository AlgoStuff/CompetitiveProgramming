import fractions
gcd = fractions.gcd
t=input()
while t:
	t-=1
	n=input()
	a=[int(x) for x in raw_input().split()]
	res = gcd(a[0],a[1])
	for x in range(2,n):
		res = gcd(res,a[x])
	print(res)	