tc = input()
c = 1
while c <= tc:
	
	s = raw_input()
	l = len(s)
	t = raw_input()
	s1 = 0
	s0 = 0
	sq = 0
	t1 = 0
	t0 = 0
	mis = 0
	for x in s:
		if x == "1":
			s1+=1
		elif x == "0":
			s0+=1
		elif x == "?":
			sq+=1
	for x in t:
		if x == "1":
			t1+=1
		elif x == "0":
			t0+=1		
	if sq - abs(s1 - t1)  - abs(s0 - t0) == 0:
		for x in range(0,l):
			if not s[x] == t[x] and not s[x] == "?":
				mis+=1
		print("Case"),str(c)+":",(sq + (mis/2))	
	else:
		print("Case"),str(c)+":",-1	
						
	c+=1
