t=input()
c=1
while t:
	t-=1
	print("Case #"+str(c)+":"),
	c+=1
	n,s = raw_input().split()
	n=int(n)
	curr = int(s[0])
	res=0
	for x in range(1,n+1):
		if curr<x:
			res+=1
			curr += (int(s[x])+1)
		else:
			curr+=int(s[x])		
	print(res)