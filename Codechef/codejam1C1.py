t = input()
while t:
	name,n=[x for x in raw_input().split()]
	n  = int(n)
	size = len(name)
	count = 0
	for x in range(0,size-n+1):
		for p in range(x,size-n+1):
			end = p+x
			while end <= size:
				if not name[p:end].find("a") >= 0 and not name[p:end].find("e") >= 0 and not name[p:end].find("i") >= 0 and 	not name[p:end].find("u") >= 0 and not name[p:end].find("o") >= 0:
					count+=1
					print name[p:end]
					break
				else:
					p +=1
					end+=1	
	print count						
	t-=1
