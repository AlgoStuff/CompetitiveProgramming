s = raw_input().split("+")
s.sort()
l = len(s)
res = ""
for x in range(0,l):
	res = res + s[x] + "+"	
print(res[0:len(res)-1])
