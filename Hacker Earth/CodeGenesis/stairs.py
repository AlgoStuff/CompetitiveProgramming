a=0
b=0
u=1
s=0
d = {}
d[0] = [0,0]
c = 1
while True:
	if u == 1 and s == 1:
		a+=1
		b-=1
		u=0
		s=0
	elif u == 0 and s == 0:
		b+=1
		a+=1
		s=1	
	elif s == 1 and u == 0:
		b+=1
		a-=1
		s=0
		u=1
	elif s == 0 and u == 1:
		a+=1
		b+=1
		s=1
		u=1	
	d[c] = [a,b]
	c+=1
	if a>100 and b>100:
		break
t=input()
while t:
	t-=1
	a,b=[int(x) for x in raw_input().split()]
	fnd = False
	for x in range(0,c):
		ll = d[x]
		if ll[0] == a and ll[1] == b:
			print(x)
			fnd = True
			break
	if not fnd:
		print("No Number")
