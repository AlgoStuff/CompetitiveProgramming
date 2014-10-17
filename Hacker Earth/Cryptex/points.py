t=input()
while t:
	x1,y1,x2,y2 = [int(x) for x in raw_input().split()]
	if(x1>x2):
		startx = x2+1
		endx = x1
	else:	
		startx = x1+1
		endx = x2 
	if(y1>y2):
		starty = y2
		endy = y1
	else:	
		starty = y1
		endy = y2 
	res = 0	
	for x in range(startx,endx):
		for y in range(starty,endy):
			if (x- x1)*(y1-y2) == (y - y1)*(x1-x2):
				res+=1
	print(res)			
	t-=1