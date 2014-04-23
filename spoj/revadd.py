t = input()
while t:
	n1,n2 = [x for x in raw_input().split()]
	n1 = n1[::-1]
	n2 = n2[::-1]
	add = int(n1) + int(n2)
	result = str(add)
	chk = True
	ans = ""
	for x in result[::-1]:
		if  x == "0" and chk:
			chk = True
		else:
			chk = False
			ans =ans + x
	print(ans)		
	t-=1
	
	
