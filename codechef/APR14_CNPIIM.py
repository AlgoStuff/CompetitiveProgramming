import math
hs = [0]*10000000

for x in range(1,6250001):
	hs[x]=hs[x-1]+(1.0/x)

t=input()
while t:
	n=input()
	res=0
	for k in range(1,n):
		a = k
		d = n-k
		m = a*d
		res+=(m-1)*hs[m-1]
	print(int(res))
	t-=1
