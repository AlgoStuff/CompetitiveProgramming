ceo,coo,cto = [int(x) for x in raw_input().split()]
n=input()
a = [int(x) for x in raw_input().split()]
a.sort()
if n%2 == 1:
	res1 = [int(x) for x in a[0:n/2]]
	res1.append(ceo)
	for x in a[n/2:n]:
		res1.append(x)
	res2 = [int(x) for x in a[0:n/2+1]]
	res2.append(ceo)
	for x in a[n/2+1:n]:
		res2.append(x)

	vres = [coo]
	for x in res1:
		vres.append(x)
	vres.append(cto)
	val1 = 0
	for x in vres[0,n+1]:
		val1 +=	x
		
