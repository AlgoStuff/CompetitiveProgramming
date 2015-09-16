t=input()
while t:
	m,w=[x for x in raw_input().split()]
	X = m+w
	n = input()
	Y = ""
	while n:
		Y = Y + raw_input()
		n -= 1
	
	for  x in X:
		if Y == "":
			break
		index = Y.find(x)	
		if not index == -1:
			Y = Y[:index]+Y[index+1:]
	if Y == "":
		print("YES")
	else:
		print("NO")				
	t -= 1	
