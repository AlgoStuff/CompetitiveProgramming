n,w= [int(x) for x in raw_input().split()]
a = [float(x) for x in raw_input().split()]
a.sort()
x = min(a[0:n])
if a[n] < 2*a[0]:
	print(min((n*(a[n]/2) + a[n]*n),w))
else:
	print(min((a[0]*n + 2*a[0]*n),w))