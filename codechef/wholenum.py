from fractions import gcd
t = input()
while t:
	d = [int(x) for x in raw_input().split() ]
	g = d[1]
	for x in d[2:]:
		g = gcd(g,x)
	for x in d[1:]:
		print(x/g),	
	print	
	t-=1
