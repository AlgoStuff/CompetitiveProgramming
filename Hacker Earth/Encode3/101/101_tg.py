import random as r
l = r.randint(1,1000000)
s=""
for j in range(1,1000001):
	s+=str(r.randint(0,1))
print(s)
