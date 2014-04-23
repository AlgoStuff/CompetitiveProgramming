M=10**9+7
A=[[2014,69],[1,0]]
def m(A,B):
  C=[[0,0],[0,0]]
  for i in 0,1:
    for j in 0,1:
      for k in 0,1:C[i][k]+=(A[i][j]*B[j][k])%M
  return C
def f(n):
  if n==1:return A
  else:
    if n%2==0:A1=f(n/2);return m(A1,A1)
    else:return m(A,f(n-1))
t=input()
while t:
	n=input();
	if 0<n<3:print(1)
	else:B=f(n-2);print((B[0][0]+B[0][1])%M)
	t-=1
