t = input()
while t:
	n,j,l,pk = [x for x in raw_input().split()]
	n = int(n)
	l = int(l)
	j = int(j)
	st = j*10
	if l == j:
		if pk == 'D':
			lt = 20 + (l*5)
		elif n == j and pk == 'U':
			lt = 20 + n*5
		elif pk == 'U':
			lt = (n-j)*5 + 30 + n*5		
	elif l < j and pk == 'U':
		lt = j*5 + (j-l)*5 + 20
	elif l < j and pk == 'D':
		lt = l*5 + 10 + 2*j*5 + 20
	elif l > j and pk == 'U':
		lt = (n-l)*5 + n*5 + 30
	elif l > j and pk == 'D':
		lt = l*5 + 20
	if (lt > st):
		print "Stairs" , st
	else:
		print "Lift",lt	
	t-=1						
