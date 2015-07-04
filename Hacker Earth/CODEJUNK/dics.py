n=input()
a=[x for x in raw_input().split()]
d={}
for x in a:
	try:
		d[x]+=1
	except:
		d[x]=1
for w in sorted(d, key=d.get, reverse=True):
  print(w), 
  print(d[w])