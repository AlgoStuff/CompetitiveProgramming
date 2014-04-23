n = input()
a = [int(x) for x in raw_input().split()]

s5 = 0
s0 = ""
ss5 = "555555555"
for x in a:
	if x == 5:
		s5+=1
	else:	
		s0 += "0"
	
if s5 >= 9 and len(s0)>=1:
	ss5 = ss5*(s5/9) + s0
	print(ss5)
elif  not s0 == "":	
	print(0)
else:
	print(-1)		
