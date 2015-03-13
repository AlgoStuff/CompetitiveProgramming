import math
f = math.factorial
def ncr(n,r):
	return f(n)/(f(n-r)*f(r))
t = int(input())
while t:
	s,n,m,k=[int(x) for x in raw_input().split()]
	total = f(s-1)/f(n-1)/f(s-n)	
	if k > n-1:
		print "0.000000"
	elif n == s:
		print "1.000000"
	else:
		
		result = 0.0
		for x in range (k,m):
			if s-m >= n-1-x and m-1 >=k:

				result = result + (ncr(m-1,x)*ncr(s-m,n-1-x))

		print result/total
	t-=1	
