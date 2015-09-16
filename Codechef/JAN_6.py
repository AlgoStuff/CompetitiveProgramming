t = input()
while t:
	n=input()
	a=[int(x) for x in raw_input().split()]
	A,B,C=[int(x) for x in raw_input().split()]
	s = raw_input()
	curr = 0
	head = 0
	tail = n-1
	point = "FRONT"
	res = 0
	pres = 1
	mul = [0]*n
	add = [0]*n
	modify = [0]*n
	for i in range(0,n):
		if s[i] == 'M':
			res = ((res%C)*(B%C))%C
			pres = ((pres%C)*(B%C))%C
			add[i] = res
			mul[i] = pres
		elif s[i] == 'A':
			res = ((res%C)+(A%C))%C
			add[i] = res
			mul[i] = pres	
		else:
			add[i] = res
			mul[i] = pres			
	for i in range(0,n):
		if s[i] == 'R':
			if point == "FRONT":
				point = "BACK"
				curr = tail
				modify[i] = a[curr]
				curr-=1
				tail-=1
			else:
				point = "FRONT"
				curr = head
				modify[i] = a[curr]
				curr+=1
				head+=1
		else:
			if point == "BACK":
				modify[i] = a[curr]
				curr-=1
				tail-=1
			else:
				modify[i] = a[curr]
				curr+=1
				head+=1
	for x in range(0,n):
		print((((modify[x]%C)*mul[x])%C + add[x])%C),
	print("")											
	t-=1
