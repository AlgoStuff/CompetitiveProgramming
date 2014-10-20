t=input()
while t:
	t-=1
	n,m = [int(x) for x in raw_input().split()]
	a =  [int(x) for x in raw_input().split()]
	a.sort()
	low = a[0]
	high = a[m-1]
	for x in range(0,n):
		print(max(abs(low-x),abs(high-x))),
	print("")