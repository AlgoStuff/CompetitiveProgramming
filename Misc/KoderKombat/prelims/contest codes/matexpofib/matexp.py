def matrix_mult(A, B):
  C = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
  for i in range(3):
    for j in range(3):
      for k in range(3):
        C[i][k] = (C[i][k] + A[i][j] * B[j][k]) % 1000000009
  return C

def fast_exponentiation(A, n):
  if n == 1:
    return A
  else:
    if n % 2 == 0:
      A1 = fast_exponentiation(A, n/2)
      return matrix_mult(A1, A1)
    else:
      return matrix_mult(A, fast_exponentiation(A, n - 1))

def solve(n):
    A = [[1,1,1],[0,0,1],[0,1,0]]
    A_n = fast_exponentiation(A,n-3)
    return A_n[0][0] + A_n[0][1] + A_n[0][2]*2
n=input()
solve(n)