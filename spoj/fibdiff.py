n = input()
s5 = pow(5,.5)

fib = (pow((1+s5),n) - pow((1-s5),n)) / (pow(2,n)*s5)

print(int(fib))
