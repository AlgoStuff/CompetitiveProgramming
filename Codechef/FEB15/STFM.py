# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/FEB15/problems/STFM
# Concept : Maths 
# Reference : None


n,m=[int(x) for x in raw_input().split()]
a=[0]*(m+1)
a[0]=1
res=0
for i in range(1,m+1):
	a[i] = (a[i-1]*i)%m
b=map(int, raw_input().split())
for temp in b:
	res+= ((temp*temp*(temp+1))/2);
	if temp+1<=m:
		res+=(a[temp+1]-1);
	else:
		res+=-1;
print(res%m)				