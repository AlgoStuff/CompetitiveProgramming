t=input()
while t:
	t-=1
	s=raw_input()
	a=[0]*27
	for x in s:
		tt = ord(x)-96
		a[tt]+=1

	pp = a[1]
	bb = 1
	for x in a[1:]:
		if not x == pp:
			bb=0	
			break
	if bb == 1:
		print("Yes")
	else:
		print("No")