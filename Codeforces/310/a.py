a=b=0
n=input()
s=raw_input()
for x in s:
	if x == '0':
		a+=1
	else:
		b+=1
print(abs(a-b))				