# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerearth.com/ACMICL/algorithm/4-batman/
# Concept : Sorting
# Reference : None
t=input()
while t:
	t-=1
	adict = {}
	n = input()
	a = [int(x) for x in raw_input().split()]
	aorg = []
	l,r = [int(x) for x in raw_input().split()]
	for x in range(0,n):
		adict[a[x]] = x
		aorg.append(a[x])
	a.sort()
	lpos = adict[a[l-1]]
	rpos = adict[a[r-1]]
	res=1
	for x in range(lpos,rpos+1):
		res*=aorg[x]
	print(res)	
