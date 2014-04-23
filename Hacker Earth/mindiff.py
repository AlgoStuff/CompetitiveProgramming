t = input()
while t:
	a = [int(x) for x in raw_input().split()]
	n = a[0]
	a.remove(a[0])
	a.sort()
	a2 = []
	for x in range(0,n/2):
		a2.append(a[x]+a[n-1-x])
	a2.sort()
	print(a2[n/2 - 1] - a2[0])	
	t-=1
