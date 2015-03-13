#include<stdio.h>

int count_connected_set(int A[1015][1015],int i,int j,int n)
{
    A[i][j]=2;
    if(A[i-1][j-1]==1 && i>0 && j>0 && i<=n && j<=n )     //NW
        count_connected_set(A,i-1,j-1,n);
    if(A[i-1][j]==1 && i>0 && j>0 && i<=n && j<=n)       //N
        count_connected_set(A,i-1,j,n);
    if(A[i-1][j+1]==1 && i>0 && j>0 && i<=n && j<=n)//   //NE
        count_connected_set(A,i-1,j+1,n);
    if(A[i][j-1]==1 && i>0 && j>0 && i<=n && j<=n)       //W
        count_connected_set(A,i,j-1,n);
    if(A[i][j+1]==1 && i>0 && j>0 && i<=n && j<=n)       //E
        count_connected_set(A,i,j+1,n);
    if(A[i+1][j-1]==1 && i>0 && j>0 && i<=n && j<=n)     //SW
        count_connected_set(A,i+1,j-1,n);
    if(A[i+1][j]==1 && i>0 && j>0 && i<=n && j<=n)       //S
        count_connected_set(A,i+1,j,n);
    if(A[i+1][j+1]==1 && i>0 && j>0 && i<=n && j<=n)     //SE
        count_connected_set(A,i+1,j+1,n);
return 1;
}// end of count_connected_set()

int main()
{
    int i,j,t,k,n,A[1015][1015],count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                scanf("%d",&A[i][j]); // geting input a test case;
        count =0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if(A[i][j]==1)
                    if(count_connected_set(A,i,j,n))
                        count++;
        }// of for
        printf("%d\n",count);
    }// end of while
return 0;
}
