t=input()
while t:
	t-=1
	n=input()
	a=[int(x) for x in raw_input().split()]
	ta = [0]*(n+1)
	for x in range(0,n):
		ta[a[x]]+=(x+1)
	yes = True
	for x in range(0,n):
		if a[x]!=ta[x+1]:
			yes=False
			break
	if yes:
		print("inverse")
	else:
		print("not inverse")

