t = input()
while t:
	n = input()
	n-=1
	n3 = n-(n%3)
	n3 = n3/3
	s3 = 3*(n3*(n3+1)/2)
	n5 = n-(n%5)
	n5 = n5/5
	s5 = 5*(n5*(n5+1)/2)
	n15 = n-(n%15)
	n15 = n15/15
	s15 = 15*(n15*(n15+1)/2)
	print(s3+s5-s15)
	t-=1
