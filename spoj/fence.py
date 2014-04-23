import math
while True:
	n = input()
	if n == 0:
		break
	else:
		res = n*n/(2*math.pi)	
	print("%.2f" % res)
