a,b,c = [int(x) for x in raw_input().split()]
if a == max(a,b,c):
	if not (b+c - a)%2 == 0 or min(b-((b+c-a)/2),(b+c-a)/2, c - ((b+c-a)/2)) < 0:
		print("Impossible")
	else:
		print b-((b+c-a)/2),(b+c-a)/2, c - ((b+c-a)/2)
elif b == max(a,b,c):
	if not (c+a - b)%2 == 0 or min(a-((a+c-b)/2),c - ((a+c-b)/2) , (a+c-b)/2) < 0:
		print("Impossible")
	else:
		print a-((a+c-b)/2),c - ((a+c-b)/2) , (a+c-b)/2
elif c == max(a,b,c):
	if not (b+a - c)%2 == 0 or min((b+a-c)/2,b-((b+a-c)/2), a - ((b+a-c)/2)) < 0:
		print("Impossible")
	else:
		print (b+a-c)/2,b-((b+a-c)/2), a - ((b+a-c)/2)

