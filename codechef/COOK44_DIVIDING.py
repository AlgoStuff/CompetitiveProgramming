n = input()
res = [int(x) for x in raw_input().split()]
res2 = sum(res)
if res2 == n*(n+1)/2 : 
	print("YES")
else:
	print("NO")	
