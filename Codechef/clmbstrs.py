import math

t = input()
while t:
	n = input()
	fact = math.factorial(n)
	count = 0
	temp = fact%10
	fact = fact/10
	while temp == 0:
		count = count + 1
		temp = fact%10
		fact = fact/10
	print count
	t = t-1	
