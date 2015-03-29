def isprime(n):
	i = 2
	while i*i <= n:
		if n%i == 0:
			return False
		i+=1
	return True

n = raw_input()
l = len(n)
a = [0]
for i in range(0,l):
	for j in range(0,l):
		if i<=j and isprime(int(n[i:j+1])):
			a.append(int(n[i:j+1]))
print(max(a))			