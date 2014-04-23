n,k = [int(x) for x in raw_input().split()]
a = [int(x) for x in raw_input().split()]
b = [0]*100001
for x in a:
	b[x]+=1
a.sort()
temp = 1
tk = k
maxi = 0
res = -1
for x in a:
	tk = k
	p = x
	maxi = b[x]
	temp = 1
	while temp <= tk and p-temp >= 0:
		if(b[p-temp] > 0):
			maxi += min(b[p-temp] , tk/(temp))
			tk -= min(b[p-temp] , tk/(temp))	
		temp+=1
	if(maxi > res):
		res = maxi	
		res_ele = x	
print(res),
print(res_ele)		
			 	
