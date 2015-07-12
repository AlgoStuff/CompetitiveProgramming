s = raw_input()
k = input()
a = [0]*26
for x in s:
	a[ord(x)-96]+=1
a.sort()
res=0
l=len(s)
for i in range(0,26):
	while a[i] > 0:
		if k < a[i]:
			fnd = 1
			break
		else:
				
