a,b,c,d = [float(x) for x in raw_input().split()]
s = a/b
z = c/d
print(s*(1/(1-(1-s)*(1-z))))
