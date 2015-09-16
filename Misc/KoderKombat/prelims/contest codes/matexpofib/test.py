t = 1;
a = 1;
b=1;

while t<=20000:
	t+=1
	temp = (a+b)%1000000009;
	a = b;
	b = temp;
print(a)