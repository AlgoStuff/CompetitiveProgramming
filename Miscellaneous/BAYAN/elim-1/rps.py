t=input()
c=1
while c<=t:
	nl=raw_input()
	n=input()
	s=raw_input()
	score = [0]*n
	for x in range(0,n):
		for y in range(0,n):
			if s[x] == 'R' and s[y] == 'S':
				score[x]+=1
			elif s[x] == 'S' and s[y] == 'P':
				score[x]+=1
			elif s[x] == 'P' and s[y] == 'R':
				score[x]+=1
	score.sort()
	res = 1;
	high = score[n-1]
	start = n-2
	while start>=0:
		if score[start]==high:
			res+=1
		else:
			break
		start-=1
	print("Case #"+str(c)+":")	
	c+=1	
	print(res)			

