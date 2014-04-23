n = input()
arr = [int(x) for x in raw_input().split()]
if n==1:
	print(1)
	print(arr[0])
else n==2:
	print(2)
	print(arr[0]),(arr[1])
elif n > 2: 
	arr.sort()
	arr2 = [arr[0],arr[1]]
	d = arr[1] - arr[0]
	n = 2
	last = arr[1]
	for x in arr[2:]:
		if not  x - last == d:
			d = x - last
			n+=1
			arr2.append(x)
			last = x
	print(n)
	for x in arr2:
		print(x),
	print				
	
	
