# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/CDVA2015/problems/CDVA1505
# Concept : Unique Elements
# Reference : None

n=input()
while n:
	n-=1
	p=input()
	d = {}
	for x in raw_input().split():
		d[x]=0
	print(len(d))	