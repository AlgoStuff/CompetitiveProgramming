import math
 
 
f = math.factorial
for i in range (0,1000):
	fact.append(f(i))
def ncr(n,r):
 
	return fact[n]/(fact[n-r]*fact[r])
def calc(n,k):
	return 	
n = input()
k = input()

total = n**n-2

if k == 1:
	print(total)
elif k == 2:
	total = total - calc(n/2,k)
	print(total)		
