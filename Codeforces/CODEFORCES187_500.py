n = input()
p =n
bottles = [0]*(1001)
num = [0]*1001
while n:
	a,b = [int(x) for x in raw_input().split()]
	bottles[a] = b
	num[a]+=1

	n-=1	
	
res = 0
for x in range(1,1001):
	if not bottles[x] == 0 and not bottles[bottles[x]] == 0:
		if bottles[x] == x and num[bottles[x]] != 1:
			res+=1
		elif not bottles[x] == x:	
			res+=1		
print(p -res)	






