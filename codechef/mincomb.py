import math
t=input()
while t: 
	n,r=[int(x) for x in raw_input().split()]
	print(math.factorial(n)/math.factorial(r)/math.factorial(n-r)%1000000009)
	t-=1
