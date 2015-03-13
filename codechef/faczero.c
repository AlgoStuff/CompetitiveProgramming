#include<stdio.h>
#include<malloc.h>
 
void main()
{
    long int *N, T, i=0, *n;    
    scanf("%ld",&T);
    N=(long int *)malloc(T*sizeof(long int));
    n=N;
    while((i++)<T)
        scanf("%ld",n++);
    printf("\n");
    long k, z;
    while((T--)>0)
    {
        z=k=*(N++)/5;
        while(k>0)
            k/=5, z+=k;
        printf("%ld\n",z);
    }
} 
