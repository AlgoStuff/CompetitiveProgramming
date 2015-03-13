def check(n1,n2):
	if n1>n2:
		x = n1
		y = n2
	else:
		x = n2
		y = n1	
	while True:
		if x == 1 or y ==1:
			return True
		if x == y:
			return False	
		if x%y == 0:
			x = y
		else:
			x = x%y
		p = y
		y = x
		x = p
				
t = input()
while t:
	n = input()
	result = 0
	num = [int(x) for x in raw_input().split()]
	for x in range(0,n):
		for y in range(x+1,n):
			if check(num[x],num[y]):
				result = result + pow(2,n-y-1)
	print(result)			
		
	t-=1
	
