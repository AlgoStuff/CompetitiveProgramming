n = input()
a = [float(x) for x in raw_input().split()]
ans = 0.0
for x in a:
	if x-int(x) <= .5:
		ans += (x-int(x))
	else:
		ans += (int(x) - x)
print(ans)			
