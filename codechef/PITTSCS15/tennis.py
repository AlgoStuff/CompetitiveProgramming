aset = 0
bset = 0
while True:
	ap = 0
	bp = 0
	d = 0
	s = raw_input()
	points = s.split()
	for x in points:
		if not d:
			if x == 'a':
				ap+=1
			else:
				bp+=1
			if ap == 4 and bp == 4:
				d = 1
			elif a == 4:			
				aset