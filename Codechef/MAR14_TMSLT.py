t = input()
while t:
	has = [0]*1000000
	n,a,b,c,d = [int(x) for x in raw_input().split()]
	MOD = 1000000
	arg = d
	aa = set()
	aa.add(d)
	has[d]+=1
	for x in range(0,n):
		arg = (((((a*arg)%MOD)*arg)%MOD) + (b*arg)%MOD + c)%MOD; 
		if has[arg] == 0:
			aa.add(arg)
		has[arg]+=1
	yes = True
	size = len(aa)
	res = 0
	for x in range(0,size):
		val = aa.pop()
		if has[val]%2 == 1:
			res+=val
			yes = False
		else:
			res-=val
			yes = True
	print(abs(res))		
	t-=1					
			
				
