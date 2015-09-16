t = input()
while t:
	n,k = [int(x) for x in raw_input().split()]
	work = ""
	for x in range(1,n+1):
		work = work+str(x)
	buff = raw_input()
	for x in buff:
		if not x ==" ":
				pos = work.find(x)
				work = work[:pos]+work[pos+1:]
		
	l = len(work)
	i = 0
	master = ""
	while i <= l-1:
		print(work[i]),
		i+=2
	print	
	servent = ""
	i = 1
	while i <= l-1:
		print(work[i]),
		i+=2
	print		
			
	t-=1	
