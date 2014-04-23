s = raw_input()
a=b=c=0
plus = False
eq = False
for x in s:
	if x == '+':
		plus = True
	elif x == '=':
		plus = False
		eq = True		
	if plus:
		b+=1
	elif eq:
		c+=1
	else:
		a+=1
if (a+b-c) == -2:
	rhs = (a+b+c)/2
	res=""
	for x in range(0,a+1):
		res=res+"|"
	res+="+"
	for x in range(0,b):
		res=res+"|"		
	res+="="
	for x in range(0,c-1):
		res=res+"|"		
	print(res)	
elif (a+b-c) == 2:
	rhs = (a+b+c)/2
	res=""
	for x in range(0,a-1):
		res=res+"|"
	res+="+"
	for x in range(0,b):
		res=res+"|"		
	res+="="
	for x in range(0,c+1):
		res=res+"|"		
	print(res)	


elif abs(a+b-c) == 0:		
	print(s)	
else:
	print("Impossible")					
