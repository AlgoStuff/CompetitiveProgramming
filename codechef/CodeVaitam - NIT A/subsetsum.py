# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/CDVA2015/problems/CDVA1508
# Concept : DP
# Reference : None

t=input()
while t:
	t-=1
	n=input()
	a = [int(x) for x in raw_input().split()]
	a.sort()
	res = 1;
	for x in a:
		if x<=res:
			res+=x
		else:
			break;
	print(res)			