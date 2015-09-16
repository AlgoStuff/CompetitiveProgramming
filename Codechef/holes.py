t =  input()
while t:
	count = 0
	s = raw_input()
	for x in s:
		if x == 'A' or x == 'D' or  x == 'O' or  x == 'P' or x == 'Q' or x == 'R':
			count+=1
		elif x == 'B':
			count+=2
	print(count)			
	t-=1
