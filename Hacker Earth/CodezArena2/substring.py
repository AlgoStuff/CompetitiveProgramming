t=input()
while t:
	t-=1
	s = raw_input()
	l = len(s)
	fnd = False
	for x in range(0,l):
		for y in range(x,l):
			ss = s[x:y+1]
			s1 = s[y+1:l]
			r1 = s1.find(ss)
			if r1 >= 0:
				fnd = True
				print("YES")
				break
		if fnd:
			break	
	if not fnd:
		print("NO")			