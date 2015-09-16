t = input()
while t:
	n,k = [int(x) for x in raw_input().split()]
	n = n**n
	r = str(n)
	l = len(r)
	print(r[:k]),
	print(r[l-k:])
	t-=1
