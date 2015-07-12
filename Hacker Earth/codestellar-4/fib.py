a = [1,1]
curr = 1
i = 2
while curr<=10**21:
	a.append(a[i-1]+a[i-2])
	curr = a[i]
	i+=1

t=input()
while t:
	t-=1
	n=input()
	res=0
	for x in a:
		if x >= n:
			break
		if x%2 == 0:
			res+=x
	print(res)