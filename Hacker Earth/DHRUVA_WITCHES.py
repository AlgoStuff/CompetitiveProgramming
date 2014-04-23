a = [0]*10000001
def f(n,d):
	if d > 30:
		return 1000000000
	if n<=10000000:
		return a[n]
	elif(n%2 == 0 and n%3 == 0):
		return min(1+f(n-1,d+1),1+f(n/2,d+1),1+f(n/3,d+1))
	elif(n%2 == 0):
		return min(1+f(n-1,d+1),1+f(n/2,d+1))
	elif( n%3 == 0):
		return min(1+f(n-1,d+1),1+f(n/3,d+1))
	else:
		return (1+f(n-1,d+1))	
		

t = input()
for x in range(1,10000001):
	if x==1:
		 a[x] = 0
	elif(x%2 == 0 and x%3 == 0):
		a[x] =min(1+a[x-1],min(1+a[x/2],1+a[x/3]))
	elif(x%2 == 0):
		a[x] = min(1+a[x-1],1+a[x/2])
	elif( x%3 == 0):
		a[x] = min(1+a[x-1],1+a[x/3])
	else:
		a[x] = (1+a[x-1])
while t:
	n = input()
	
	print(f(n,0))
	t-=1
	
