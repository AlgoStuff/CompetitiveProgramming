from fractions import gcd
t = input()
while t:
	n = input()
	num = [int(x) for x in raw_input().split()]
	p = num[0]
	for x in num[1:]:
		p = (p*x)/gcd(p,x)
	print(p%1000000007)	
	t-=1
