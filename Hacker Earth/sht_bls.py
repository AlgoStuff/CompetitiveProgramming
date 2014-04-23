t=input()
while t:
	n,m = [int(x) for x in raw_input().split()]
	b = n+m-1
	print(b-n),
	print(b-m)
	t-=1
