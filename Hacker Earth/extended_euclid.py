
def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)
        
def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        return None  # modular inverse does not exist
    else:
        return x % m
        
t = input()
while t:
	n,x,m = [int(x) for x in raw_input().split()]
	num1 = pow(x,n+1,m) - x%m
	num2 = modinv(x-1,m)
	print((num1*num2)%m)
	t-=1        
