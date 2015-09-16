
t = input()
while t:
	n = input()
	s = raw_input()
	p = s = s[::-1]

	if not n%2 == 0:
		print("NO")
	elif s == p:
		print("YES")	
	
	t =t -1


	

