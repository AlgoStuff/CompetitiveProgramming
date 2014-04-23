t =input()
while t:
	n,d,r = [int(x) for x in raw_input().split()]
	start = (n%d)*10
	if start == 0:
		print(0)
	elif r == 1:
		print(start/d)	
	else:
		chk = False
		while r:
			res = start/d	
			rem = start%d
			if rem == 0:
				chk = True
				break
			else:
				start = rem*10	
			r-=1
		if chk:
			print(0)
		else:
			print (res)				
	t-=1
