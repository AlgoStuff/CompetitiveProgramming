from fractions import gcd 
t = input()

while t:
	a,b,c = [int(x) for x in raw_input().split()]
	g = gcd(a,b)
	l = a*b/g
	print(l*(c/l + 1))

	t-=1
