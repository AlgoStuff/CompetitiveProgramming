pal = []
for x in range(1,1000001):
	s=str(x)
	if s==s[::-1]:
		pal.append(x)
				
t = input()
while t:
	t-=1
	n=input()
	s=str(n)
	if s==s[::-1]:
		print(0)
	else:
		for x in pal:
			if x > n:
				print(x-n)
				break
					
