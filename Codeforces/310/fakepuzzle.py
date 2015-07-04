n = int(input());
a = [int(x) for x in input().split()]
b = [x for x in range(0,n)]

t = n+1
f = 0
while t :
	t = t-1
	tmp = 1
	for x in range(0,n) :
		if tmp :
			b[x] = b[x] - 1
			if b[x]<0 :
				b[x] = n-1
		else:
			b[x] = b[x] + 1
			if b[x]>n-1 :
				b[x] = 0
		tmp = 1-tmp
	for x in range(0,n):        
		if a[x]!=b[x]:
			f = 0
		else:
	    	f = 1
	if f:
		print("Yes")
		break
if not f:
	print("No")
