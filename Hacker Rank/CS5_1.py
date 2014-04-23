a = 1
b = 1
c = 2
cnt = 0
while c < 10000000000:
	c = a+b
	a = b
	b = c
	cnt+=1 

print(cnt)
