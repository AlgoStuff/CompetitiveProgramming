a =  [int(x) for x in raw_input().split()]
b = {}
for x in a:
	b[x]=1
res = 0	
while True:
	a = [int(x) for x in raw_input().split()]
	if len(a) == 1 and a[0] == 0:
		break;
	match = True	
	for x in a:	
		try:
			b[x]+=1
		except:
			match = False
			break;	
	if match:
		res+=1
print(res)				