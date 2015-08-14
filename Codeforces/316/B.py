
n,m = [int(c) for c in raw_input().split()]
if n == 1:
	print(1)
else:	
	if m>n-m:
		print(m-1)
	else:
		print(m+1)