#include<stdio.h>

int count_connected_set(char A[1015][1015],int i,int j,int n)
{
    A[i][j]='p';
    if(A[i-1][j-1]=='S' && i>0 && j>0 && i<=n && j<=n )     
        count_connected_set(A,i-1,j-1,n);
    if(A[i-1][j]=='S' && i>0 && j>0 && i<=n && j<=n)       
        count_connected_set(A,i-1,j,n);
    if(A[i-1][j+1]=='S' && i>0 && j>0 && i<=n && j<=n)
        count_connected_set(A,i-1,j+1,n);
    if(A[i][j-1]=='S' && i>0 && j>0 && i<=n && j<=n)      
        count_connected_set(A,i,j-1,n);
    if(A[i][j+1]=='S' && i>0 && j>0 && i<=n && j<=n)     
        count_connected_set(A,i,j+1,n);
    if(A[i+1][j-1]=='S' && i>0 && j>0 && i<=n && j<=n)    
        count_connected_set(A,i+1,j-1,n);
    if(A[i+1][j]=='S' && i>0 && j>0 && i<=n && j<=n)      
        count_connected_set(A,i+1,j,n);
    if(A[i+1][j+1]=='S' && i>0 && j>0 && i<=n && j<=n)     
        count_connected_set(A,i+1,j+1,n);
return 1;
}

int main()
{
    int i,j,t,k,n,count;
    char A[1015][1015];
    char u;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                scanf("%c",&A[i][j]); 
            
                      count =0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if(A[i][j]==1)
                    if(count_connected_set(A,i,j,n))
                        count++;
        }
        printf("%d",count);
       if(count%2) printf("Alice\n");
       else printf("Bob\n");
    }
return 0;
}
