# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/CDVA2015/problems/CDVA1510
# Concept : Simple Math
# Reference : None

n=input()
a = [int(x) for x in raw_input().split()]
curr_max = a[0];
b={a[0]:1}
el=[a[0]]
for x in a[1:]:
	if(x<=curr_max):
		if x == curr_max:
			b[x]+=1
		else:
			b[x]=1
			el.append(x)
			curr_max = x

l = len(el)
res = 0		
add = [b[el[0]]]
for x in range(1,l):
	add.append(add[x-1]+b[el[x]])


resl = add[0]
for x in range(1,l-1):
	resl = add[x-1]
	resr = add[l-1]-add[x]
	resn = add[x]-add[x-1]
	res+=resl*resr*resn
print(res)			
