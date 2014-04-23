x,y,m =  [int(x) for x in raw_input().split()]
if m <= x or m <= y:
	print(0)
elif x <= 0 and y<=0 and m > max(x,y):
	print(-1)
elif x > 0 and y > 0 and m<=0:
	print(-1)
elif x >=0 and y >=0 and m < min(x,y):
	print(-1)
elif x >=0 and y >= 0 and m > max(x,y):
	if ((m- min(x,y)) % max(x,y)) == 0:
		print ((m- min(x,y)) / max(x,y))
	else:
		print(((m- min(x,y)) % max(x,y))+1)					
elif x <0 and y <0 and m < min(x,y):
	if ((m- max(x,y)) % min(x,y)) == 0:
		print ((m- max(x,y)) / min(x,y))
	else:
		print(((m- max(x,y)) % min(x,y))+1)
	
else:
	if ((m- min(x,y)) % max(x,y)) == 0:
		print ((m- min(x,y)) / max(x,y))
	else:
		print(((m- min(x,y)) % max(x,y))+1)

		
