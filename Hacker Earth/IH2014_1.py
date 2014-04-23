t=input()
while t:
	b=[0]*26
	a=[0]*26
	s1= raw_input()
	s2= raw_input()
	l1 = len(s1)
	l2 = len(s2)
	if l1 > l2:
		print("NO")
		t-=1
		continue
	for x in s1:
		b[ord(x)-97]+=1	
	for x in range(0,l2-l1+1):
		yes = 1
		a=[0]*26
		for c in s2[x:x+l1]:
			a[ord(c)-97]+=1
			if a[ord(c)-97] > b[ord(c)-97]:
				yes = 0
				break		
		if yes == 1:
			print("YES")
			break
	if yes == 0:
		print("NO")			
	t-=1
