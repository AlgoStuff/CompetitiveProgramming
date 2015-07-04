n=input()
a=[int(x) for x in raw_input().split()]

b = [x for x in range(0,n)]

def same(a,b):
	for x in range(0,n):
		if a[x]!=b[x]:
			return False
	return True

t = n+1
y=0
while t:
	t-=1
	tmp = 1
	for x in range(0,n):
		if tmp:
			b[x]=b[x]+1
			if b[x]>=n:
				b[x]=0
		else:
			b[x]=b[x]-1
			if b[x]<0:
				b[x]=n-1
		tmp=1-tmp		
	#print(b)			
	if same(a,b):
		print("Yes")
		y=1			
		break
if not y:
	print("No")

