import fractions
count = [0,0]
for x in range(2,10001):
	count_ind = 0
	for y in range(1,x):
		if fractions.gcd(y,x) == 1:
			count_ind+=1
	count.append(count[x-1]+count_ind)
t = input()
while t:
	n=input()
	print(count[n])
	t-=1