t=input()
c=1
while c<=t:
	print("Case #"+str(c)+":")	
	c+=1	
	w,r,m,s = [int(x) for x in raw_input().split()]
	if w< 35:
		temp = 0
	else:
		temp = 1
	if r<40:
		hb = 0
	elif r>60:
		hb = 1
	else:
		hb = -1
	if m <10:
		nomov = 1
	else:
		nomov = 0
	if nomov == 1:
		print("NOTHING")
	elif								