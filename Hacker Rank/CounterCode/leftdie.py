n=input()
a = [int(x) for x in raw_input().split()]
res=0
while True:
	res+=1
	b = [a[0]]
	over = True
	for i in range(1,len(a)):
		if a[i]<=a[i-1]:
			b.append(a[i])
		else:
			over = False
	#print(b)
	a=b	
	if over:
		break
if res-1 == 0:
	print(1)
else:			
	print(res-1)				
