t=input()
while t:
	t-=1
	s = raw_input()
	freq = {}
	for x in s:
		try:
			freq[x]+=1
		except:
			freq[x]=1
	freq=sorted(freq, key=freq.get)		
	print(freq)	
