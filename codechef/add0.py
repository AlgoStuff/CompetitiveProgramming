n = input()
num = [x for x in raw_input().split()]
count = 0
zero = []
for x in num:
	if str(x).find("0") >= 0:
		count+=1
		zero.append(x)
	else:
		nonzero = x
if not count == 0:
	if count == n:
		print(count)
	else:
		print(count+1)	
		print(nonzero),					
	for x in zero:
		print(x),

else:
	print("0")
	print	
