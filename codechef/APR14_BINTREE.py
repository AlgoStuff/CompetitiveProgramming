t=input()
while t:
	x,y =  [int(x) for x in raw_input().split()]   
	res = 0
	tx = x
	ty = y
	lx = 1
	ly = 1
	while tx != 1:
		tx/=2
		lx+=1
	while ty != 1:
		ty/=2
		ly+=1
	if lx > ly:
		while lx != ly:
			x/=2
			lx-=1
			res+=1
	else:
		while lx != ly:
			y/=2
			ly-=1
			res+=1			
	while x != y:
		res+=2
		if x != 1:
			x/=2
		if y != 1:	
			y/=2
	print(res)
	t-=1	
