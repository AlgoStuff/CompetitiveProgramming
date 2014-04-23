t = input()
while t:	
	s1 = raw_input()
	s2 = raw_input()
	if s2.find(s1) >=0:
		print("possible")
	else:
		print("not possible")	
	t-=1
