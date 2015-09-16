t = input()
c = 1
while c<=t:
	ans1 = input()
	mat1 = [[]*5]*5
	mat2 = [[]*5]*5
	for r in range(1,5):
		mat1[r].append([int(x) for x in raw_input().split()])
	ans2 = input()
	for r in range(1,5):
		mat2[r].append([int(x) for x in raw_input().split()])
	print(mat1)
	print(mat2)		
	no = 0		
	res = 1
	for x in range(1,5):
		print(mat1[ans1][x] , mat2[ans2][x])
		if mat1[ans1][x] == mat2[ans2][x]:
			no+=1
			res = mat1[ans1][x]
	
	if no > 1:
		result = "Bad magician!"
	elif no == 0:
		result = "Volunteer cheated!"
	else:
		result = res
	print("Case #"+str(c)+": "+str(result))
	c+=1
