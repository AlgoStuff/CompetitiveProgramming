#problem link : http://www.codechef.com/MAY14/problems/OJUMPS
#concept : simple series and math
n=input()
if n in [0,1,3]:
	print("yes")
elif n%3 == 0 or (n-1)%6 == 0:
	print("yes")
else:
	print("no")	
