t=input()
while t:
	m,w=[x for x in raw_input().split()]
	X = m+w
	n = input()
	
	while n:
		Y = Y + raw_input()
		n -= 1
	print X
	print Y
	t -= 1	
