s = raw_input()
a , b = s.split("^")
a = a[::-1]
al = len(a)
bl = len(b)
l = 0
r = 0
for x in range(0,al):
	if not a[x] == "=":
		l += (x+1)*int(a[x])

for x in range(0,bl):
	if not b[x] == "=":
		r += (x+1)*int(b[x])
		
if l == r:
	print("balance")
elif l < r:
	print("right")
else:
	print("left")			  
