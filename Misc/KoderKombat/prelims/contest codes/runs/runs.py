t=input()
while t:
	t-=1
	n=input()
	div = n/6
	rem = n%6
	if rem == 0 or rem == 5:
		print(1)
	elif rem == 4:
		print(div+2)
	else:
		print(1+div+1+div+1)
