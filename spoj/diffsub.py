import math
f = math.factorial
n,t,w,r = [int(x) for x in raw_input().split()]
res = f(n)/(f(t)*f(w)*f(r))
print (res%1000000007)
