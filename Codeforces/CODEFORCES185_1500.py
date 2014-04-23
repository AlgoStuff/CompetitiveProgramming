n,k = [int(x) for x in raw_input().split()]
if k >= (n-1)*(n)/2:
	print("no solution")
else:
	while n:
		print(1),n
		n -= 1	
