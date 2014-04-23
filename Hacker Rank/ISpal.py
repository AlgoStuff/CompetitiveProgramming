import math
s = raw_input()
array = [0]*26
res = 0
for x in s:
	array[ord(x)-97]+=1
for x in array:
	if x%2 == 1:
		res+=1
if res > 1:
	print(0)
else:
	den = 1
	num = 0
	for x in array:
		den *= math.factorial(x/2)
		num += x/2
	print((math.factorial(num)/den)%1000000007)				
