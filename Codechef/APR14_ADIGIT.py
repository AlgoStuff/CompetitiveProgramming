p = [[0]*10]*100001
f = [[0]*10]*100001
n,m =  [int(x) for x in raw_input().split()]
s = raw_input()

for x in range(0,n):
	for y in range(0,10):
		p[x+1][y] = p[x][y]
	p[x+1][int(s[x])]+=1
	
print(p[1])
while m:
	q=input()
	curr = int(s[q])
	curr_res=0
	res=0
	for y in range(0,10):
		curr_res = curr - y
		if curr_res > 0:
			res = res+curr_res*p[q][y]
		else:
			res+=curr_res*p[q][y]*-1
	print(res)			
	m-=1
			
	
