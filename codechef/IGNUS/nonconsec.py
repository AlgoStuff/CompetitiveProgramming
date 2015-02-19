# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/IGNU2015/problems/IGNUS15C
# Concept : Combinatorics
# Reference : http://stackoverflow.com/questions/10644755/finding-total-ways-of-selecting-items-such-that-no-two-are-consecutive


def nck(a,b):
	if a >= 100003:
		print(0)
	else:
		res = 1
		for i in range(b+1,a+1):
			res = (res*i)
		res2 = 1	
		for i in range(1,a-b+1):
			res2 = res2*i
		return ( ( res/res2) %100003)	


t=input()
while t:
	t-=1
	n,k = [int(x) for x in raw_input().split()]
	if n%2 == 0 and k > n/2:
		print(0)
	elif n%2 == 1 and k > (n+1)/2:
		print(0)
	else:
		print(nck(n-k+1,k))		