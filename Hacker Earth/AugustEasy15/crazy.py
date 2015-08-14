
n,m=[int(x) for x in raw_input().split()]
a=[int(x) for x in raw_input().split()]
b=[int(x) for x in raw_input().split()]

dic = {}
for i in range(0,n):
	dic[a[i]]=b[i]

steps=[]

for i in range(0,n):
	ea = a[i]
	eb = dic[ea]
	count=1
	while ea!=eb:
		eb=dic[eb]
		count+=1
	steps.append(count)
m-=1
for i in range(0,n):
	steps[i] = m%steps[i]
for i in range(0,n):
	ea = a[i]
	eb = dic[ea]
	while steps[i]:
		steps[i]-=1
		eb=dic[eb]
	print(eb),
print		