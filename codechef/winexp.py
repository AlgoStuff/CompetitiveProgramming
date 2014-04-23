t = input()
while t:
	p = float(input())
	if p < .5:
		p=1-p
	print(10000 + (2*p - 1)*(10000 - 10000*p))
	t-=1
		
