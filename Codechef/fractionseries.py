p,q = [float(x) for x in raw_input().split()]
ans = p/q
n = input()
p = raw_input()
p = p[::-1]
num =  [float(x) for x in p.split()]
result = 1/num[0]
for x in num[1:]:
	result = result+x
	result = 1/result
result = 1/result
if ans/result == 1:
	print("YES")
else:
	print("NO")	

