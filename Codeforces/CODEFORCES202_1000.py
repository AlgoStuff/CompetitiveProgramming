n = input()
o = [int(x) for x in raw_input().split()]
c = [int(x) for x in raw_input().split()]
print(c)
net = [0]*(n+2)
visit = [False]*(n+1)
tree = [0]*(n+1)
for x in range(0,n):
	net[c[x]]+=1
	if net[c[x]] > 1:
		visit[c[x]] = True;
print(visit)	
	
for x in range(1,n+1):
	if visit[c[x-1]] or o[x-1] == 1:
		print("z")
		tree[x] = 0
	else:
		print("c")
		tree[c[x-1]] = x		
print(tree)		 	
max1 = 0
ans1 = []
max2 = 0
ans2 = []
check = True

					
