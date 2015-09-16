t = input()
while t:
	n,m=[int(x) for x in raw_input().split()]
	a = [[],[]]
	p,q=[int(x) for x in raw_input().split()]
	i = 0
	j = 0
	while i  < n:
		a[i][0].append(1)
		i = i+ 1
	while  j < n:
		a[i][0].append(1)
		j = j+ 1	
	a[p-1][q-1]  = 0	
	i = 0
	j = 0
	while  i < n:
		
		while  j < n:
			if (not k == p-1 )or (not l== q-1):
				a[i][j].append(a[i-1][j]+a[i][j-1])
			j = j+ 1
		i = i+1	
	print(a[n-1][m-1])	
