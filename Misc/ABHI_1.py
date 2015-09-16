def foo(n,a,b,c):
	
	na = nb = nc = 0;	
	if n - a >= 0:
		na = 1	
	if n - b >= 0:
		nb = 1	
	if n - c >= 0:
		nc = 1	
	if n <= 0:
		return 0			
	else:
		return max(na+foo(n-a,a,b,c) , nb+foo(n-b,a,b,c) , nc+foo(n-c,a,b,c) )

n,a,b,c = [int(x) for x in raw_input().split()]
print(foo(n,a,b,c))
