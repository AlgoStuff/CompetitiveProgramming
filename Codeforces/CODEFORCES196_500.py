n,m = [int(x) for x in raw_input().split()]
a = [int(x) for x in raw_input().split()]
a.sort()
res = 100000000
for i in range(0,m-n+1):
	if a[n+i-1] - a[i] < res:
		res = a[n+i-1] - a[i]
print(res)
