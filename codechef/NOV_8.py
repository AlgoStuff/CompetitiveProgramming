sq = []
for x in range(0,100001):
	p = str(x*x)
	check = True
	for d in p:
		if int(d) in [0,1,4,9]:
			check = True
		else:
			check = False
			break
	if(check):
		sq.append(x*x)

t = input()
while t:
	a,b=[int(x) for x in raw_input().split()]
	res=0
	for x in sq:
		if x >= a and x<=b:
			res+=1
		if x > b:
			break
	print(res)			
	t-=1
