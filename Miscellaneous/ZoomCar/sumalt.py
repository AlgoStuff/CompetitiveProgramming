t=input()
while t:
	t-=1
	n=input()
	a=[int(x) for x in raw_input().split()]
	inc = a[0]
	exc = 0
	for x in a[1:]:
		temp = max(inc,exc)
		inc = exc+x
		exc = temp
	print(max(inc,exc))