s=raw_input()
l = len(s)
a=[0]*l
cc = 0
for i in range(0,l):
	if s[i] == '0':
		a[i] = cc
	else:
		a[i] = cc+1
		cc+=1

res = 0
for i in range(0,l):
	if s[i] == '0':
		res+= a[i]*(cc-a[i])
print(res)								
