s = raw_input()
tl = 0
res = 0
l = len(s)
for x in range(l-4):
	if s[x:x+5] == "heavy":
		tl +=1
	elif s[x:x+5] == "metal":
		res = res+tl
print(res)		
						
	
	
