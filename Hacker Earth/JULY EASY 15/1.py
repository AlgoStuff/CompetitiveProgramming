n=input()
a=[int(x) for x in raw_input().split()]
e=[]
o=[]
for x in a:
	if x%2:
		o.append(x)
	else:
		e.append(x)
se = sum(e)
so = sum(o)
o.sort()
e.sort()
for x in e:
	print(x),
print(se),
for x in o:
	print(x),
	
print(so)		