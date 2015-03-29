l = input()
even = False
for i in range(1,l+1):
	rr = input()
	if rr%2 == 0:
		print(0)
		even = True
		break
if not even:
	print(1)