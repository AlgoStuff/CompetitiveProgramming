import math
t = input()
while t:
	n=input()
	s=str(math.factorial(n))
	count = 0
	for x in s:
		if x == '4' or x == '7':
			count+=1
	print(count);		
	t-=1