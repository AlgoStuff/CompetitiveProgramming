t = input()
n=t
a = []
while t:
	a.append(raw_input())
	t-=1
for x in range(0,n-1):
	yes = 0
	for y in range(x+1,n):
		
		s1 = a[x]
		s2 = a[y]
		s2 = s2[::-1]
		#print(s1,s2)
		if s1 == s2:
			print(len(s1)),
			print(s1[len(s1)/2])
			break
			yes = 1
	if(yes == 1):
		break		
		
