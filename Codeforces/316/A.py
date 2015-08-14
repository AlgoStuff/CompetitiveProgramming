n,m = [int(c) for c in raw_input().split()]
cw = {}
for x in range(1,n+1):
	cw[x]=0
for x in range(0,m):
	v = [int(c) for c in raw_input().split()]
	va = {}
	for y in range(0,n):
		va[y+1]=v[y]
	res = 1
	res_max = -1
	for x in range(1,n+1):
		if va[x]>res_max:
			res = x
			res_max = va[x]
	cw[res]+=1		

res = 1
res_max = -1
for x in range(1,n+1):
	if cw[x]>res_max:
		res = x
		res_max = cw[x]
print(res)	
