t=input()
while t:
	t-=1
	n=input()
	res=1
	for x in range(1,n+1):
		res = (res*x)%1000000007
	print(res%1000000007)	