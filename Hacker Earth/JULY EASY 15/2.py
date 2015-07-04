def ans(n,k):
	if k>n:
		return 0
	elif k==n:
		return 1
	else:
		return ans(n,k+1)+ans(n-k,k)
t=input()
while t:
	t-=1
	n,k=[int(x) for x in raw_input().split()]
	print(ans(n,k))				