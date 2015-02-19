def matrix_mult(A, B , m):
  C = [[0 for x in range(m)] for x in range(m)]
  for i in range(m):
    for j in range(m):
      for k in range(m):
        C[i][k] = (C[i][k] + A[i][j] * B[j][k]) % 1000000007
  return C

def fast_exponentiation(A, m,n):
  if n == 1:
    return A
  else:
    if n % 2 == 0:
      A1 = fast_exponentiation(A,m, n/2)
      return matrix_mult(A1, A1 , m)
    else:
      A1 = fast_exponentiation(A,m, n - 1)
      return matrix_mult(A, A1 , m)


t=input()
while t:
  t-=1
  m,n = [int(x) for x in raw_input().split()]
  mat = []
  for x in range(0,m):
      a = [int(x) for x in raw_input().split()]
      mat.append(a)
  res = fast_exponentiation(mat,m,n)
  for x in res:
    for y in x:
      print(y),
    print  
