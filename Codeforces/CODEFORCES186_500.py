n = raw_input()
p = len(n)-1
if int(n) >= 0:
	print(n)
elif p == 1:
	print(n)
else:
	n = n[1:]
	mid = n[:p-2] + n[p-1:]
	if int(n[:p-1]) < int(mid):
		if int(n[:p-1]) == 0:
			print(n[:p-1])
		else:
			print("-"+n[:p-1])
	else:
		if mid == "0":
			print(mid)
		else:
			 print("-"+mid)	 
		

		
