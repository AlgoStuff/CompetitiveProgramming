# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/CDVA2015/problems/CDVA1504
# Concept : String Ops
# Reference : None
n=input()
while n:
	n-=1
	s=raw_input()
	res=""
	for x in s:
		if not(x>='0' and x <= '9'):
			res+=x;
	print(res)		