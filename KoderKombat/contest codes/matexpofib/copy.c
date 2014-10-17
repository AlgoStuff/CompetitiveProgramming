#include <stdio.h>
#define MOD 1000000009
 
void multiply(long long int F[2][2], long long int M[2][2]);
 

void power(long long int F[2][2], long long int n);
 
/* function that returns nth Fibonacci number */
long long int fib(long long int  n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0] % MOD;
}
 
/* Optimized version of power() in method 4 */
void power(long long int F[2][2], long long int n)
{
  if( n == 0 || n == 1)
      return;
  long long int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int x =  (((F[0][0]%MOD)*(M[0][0] % MOD)) % MOD + (F[0][1] % MOD  *M[1][0] % MOD) % MOD) % MOD;
  long long int y =  (((F[0][0]%MOD)*(M[0][1] % MOD))% MOD + (F[0][1] % MOD  *M[1][1] % MOD) % MOD) % MOD;
  long long int  z =  (((F[1][0]%MOD)*(M[0][0] % MOD))% MOD + (F[1][1] % MOD  *M[1][0] % MOD) % MOD) % MOD;	
  long long int w =  (((F[1][0]%MOD)*(M[0][1] % MOD))% MOD + (F[1][1] % MOD  *M[1][1] % MOD) % MOD) % MOD;
 
  F[0][0] = x % MOD;
  F[0][1] = y % MOD;
  F[1][0] = z % MOD;
  F[1][1] = w % MOD;
}
 
/* Driver program to test above function */
int main()
{
  int t;long long int n;
  scanf("%d" , &t);
  while(t--)
  {
	scanf("%lld" , &n);
	if(n == 0) printf("0\n");
	else
  	printf("%lld\n" , fib(n + 1));
  }
  return 0;
}
