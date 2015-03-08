# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerearth.com/codemyca/algorithm/little-stuart-and-his-teacher-20/
# Concept : Harmonic series
# Reference : https://gist.github.com/thinkphp/1529713

a = []
a.append(0)
a.append(0)
for x in range(2,1000001):
	a.append(1.0/x + a[x-1])
t=input()
while t:
	t-=1
	n=input()
	res = a[n]*n - (n-1)
	print(res)