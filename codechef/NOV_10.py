a=[0]
for x in range(0,21):
	a.append(pow(2,10**x,1000000007))
t = input()	
while t:
	n = input()
	s = bin(n)
	res = 1
	l = 1
	s=s[2:]
	s=s[::-1]
	for x in s:
		if x == "1":
			res = (res*a[l])%1000000007
		l+=1	
	print(pow(res,2,1000000007))				
	t-=1
