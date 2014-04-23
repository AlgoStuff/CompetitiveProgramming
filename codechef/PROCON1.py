primes = [ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 ]
def sumdig(n):
	res = 0
	while n > 0:
		res = res + n%10
		n = n/10
	return res	
n = input()
while n:
	a = input()
	b = input()
	res = 0
	for i in range(a,b+1):
		if sumdig(i)  in primes:
			res+=1
	print(res)		
	n-=1
