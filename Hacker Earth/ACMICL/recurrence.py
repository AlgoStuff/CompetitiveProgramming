# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerearth.com/ACMICL/algorithm/icl-3-bacteria-population/
# Concept : Recurrence
# Reference : None

n = input()
r0 = 1 
r1 = 2
r2 = 2
if n == 0:
	print(1)
elif n == 1 or n ==2:
	print(2)
else:	
	res = 0
	for i in range(3,n):
		res = r0+r1
		r0 = r1
		r1 = r2
		r2 = res
	print(res)	
