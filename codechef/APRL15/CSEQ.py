# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/APRIL15/problems/CSEQ
# Concept : Solution to equation
# Reference : http://math.stackexchange.com/questions/432496/number-of-non-decreasing-sequences-of-length-m

t=input()
mod = 10**6 + 3
while t:
	t-=1
	n,l,r = [int(x) for x in raw_input().split()]
	p = n+r-l
	q = n
	print(ncr(p,q)%mod)