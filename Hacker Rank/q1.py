def check(s1,s2,l):
	res = 0
	for x in range(0,l):
		if not s1[x] == s2[x]:
			res+=1
	return res		
		
s = raw_input()
k = input()
sub = []
l = len(s)
for i in range(0,l):
	for j in range(i,l):
		if not i == j:
			sub.append(s[i:j])
	sub.append(s[i:j+1])
ls = l*(l+1)/2
res = 0
for x in range(0,ls):
	for y in range(x+1,ls):
		l1 = len(sub[x])
		l2 = len(sub[y])
		if l1 == l2:
			ck = check(sub[x] , sub[y] , l2)
			if ck <= k:
				res+=1			
print(res)		
