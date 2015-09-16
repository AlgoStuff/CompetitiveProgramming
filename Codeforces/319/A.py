n,x = [int(x) for x in raw_input().split()]
res=0
for i in range(1,n+1):
	if x%i == 0:
		if x/i <= n:
			res+=1

print(res)		