from math import log 
n,k = [int(x) for x in raw_input().split()]
n = n  - 1
last = pow(2,n,pow(10,k))
first = int(str(pow(10,n*(log(2)/log(10))))[0:k])
print(last+first)

