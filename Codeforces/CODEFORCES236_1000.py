s,k = [int(x) for x in raw_input().split()]

res = 0

		
a = [int(x) for x in raw_input().split()]
b = []
for x in a:
	b.append(x)
#print(a,b)
for x in range(0,s-1):
	if(a[x+1]-a[x] != k):
		res+=1
		a[x+1] = k+a[x]
print(res)
#print(a,b)
for x in range(0,s):
	if a[x] != b[x]:
		if a[x] > b[x]:
			print("+"),
			print(x+1),
			print(a[x]-b[x])
		else:
			print("-"),
			print(x+1),
			print(b[x]-a[x])	

