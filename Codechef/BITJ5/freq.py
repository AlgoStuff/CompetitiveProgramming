t=input()
while t:
	t-=1
	n,k=[int(x) for x in raw_input().split()]
	a = [int(x) for x in raw_input().split()]
	freq = {}
	for x in range(0,n):
		try:
			freq[a[x]]+=1
		except:
			freq[a[x]]=1
	res = 1000000		
	for x in freq:
		res = min(abs(freq[x]-k),res)
	print(res)	
