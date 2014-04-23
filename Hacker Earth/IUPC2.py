import math
t = input()

while t:
	h,d,v = [float(x) for x in raw_input().split()]
	x = 0.0
	x = float(math.sqrt(d*d - h*h))
	print(x*v/h)
	t-=1
