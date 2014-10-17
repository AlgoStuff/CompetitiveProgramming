#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MOD 1000000009

//matrix multiplication 2x2
	int **half_matrix;

int **matrix_mul(int **matrix1 , int **matrix2)
{
	int i, j , k;
	int **result = malloc(2 * sizeof(int *));
        result[0] = malloc(2 * sizeof(int));
        result[1] = malloc(2 * sizeof(int));

	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j ++)
		{
			result[i][j] = 0;
			for(k = 0 ; k < 2 ; k++)
				result[i][j] = (result[i][j] % MOD +  (matrix1[i][k] % MOD  * (matrix2[k][j] % MOD)) % MOD) % MOD;
		}
	}

	
	return result;
}	
//matrix exp
int **matrix_exp(int **matrix , long long int n)
{
	
	if(n == 1)
		return matrix;
	
	half_matrix = matrix_exp(matrix , n / 2);
	if(n % 2 == 0)
	
		return matrix_mul(half_matrix , half_matrix);
		
	else
		return  matrix_mul(matrix , matrix_mul(half_matrix , half_matrix));

	
	
}	


int main()
{

	int **matrix = malloc(2 * sizeof(int *));long long int n;int **result;int t;
	matrix[0] = malloc(2 * sizeof(int));
	matrix[1] = malloc(2 * sizeof(int));
	
	matrix[0][0] = 1;
	matrix[0][1] = 1;
	matrix[1][0] = 1;
	matrix[1][1] = 0;
	scanf("%d" , &t);
	while(t--)
	{
	scanf("%lld",  &n);
	if(n == 0){
		printf("%d\n",0);
	}
	else
	{result = matrix_exp(matrix , n);
		printf("%d\n" , (result[1][0] + result[1][1])%MOD;}
	free(half_matrix);
	}
	return 0;
}





