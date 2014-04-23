s = raw_input()
l = len(s)
res = 1
if l == 1:
	res = 0
	print("No")
elif s[0] != s[l-1]:
	res = 0
	print("No")
else:
	
	for x in range(1,l-2):
		if (s[x] == '+' and s[x+1] == '-') or (s[x] == '-' and s[x+1] == '+'):
			print("No")
			res = 0
			break
if(res):
	print("Yes")		
