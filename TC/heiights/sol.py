t=input()
while t:
	t-=1
	a = [int(x) for x in raw_input().split()]
	prev = a[1]
	res = 1
	for x in a[2:]:
		if x > prev:
			res+=1
			prev = x
		else:
			break	
	print(res)				
