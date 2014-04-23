t = input()
while t:
	v = input()
	v*=4
	buff = pow(v,(1.0/3.0))
	res = (pow(3,.5)*buff*buff/2)  + (pow(3,.5)*v/buff)
	print(res)
	t-=1
