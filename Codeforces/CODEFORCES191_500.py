size = input()
array = [int(x) for x in raw_input().split()]
maxi = 0
p = 0
one = 0
for x in range(0,size):
	p =  0
	for y in range(x,size):
		if array[y] == 0 :
			p+=1
		if array[y] == 1:
			p-=1
	if p>maxi:
		left = x
		right = y
		
res = 0		
for x in range(0,size):
	if x not in range(left,right+1) and array[x] == 1:
		res +=1
	else:
		if array[x] == 1:
			res-=1
		else:
			res+=1
print(res)										

