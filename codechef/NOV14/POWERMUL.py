# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/NOV14/problems/POWERMUL
# Concept : Combinatorics
# Reference : None
t=input()
while t:
	t-=1
	n,m,q = [int(x) for x in raw_input().split()]
	a = [1];
	for i in range(1,100001):
		a.append(a[i-1]*i)
	while q:
		q-=1
		r = input()
		left = a[n]/a[r]
		right = a[n]/a[n-r]
		left = pow(left,r,m)
		right = pow(right,n-r,m)
		res = (left*right)%m
		print(res)	