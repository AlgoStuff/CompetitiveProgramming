#include<stdio.h>
#include<string.h>
long long dp[40];
 
void Pprocess()
{
     int i; dp[0]=1;
     for(i=1;i<35;i++) dp[i]=(2*dp[i-1]*(2*i+1))/(i+2);
}
 
int main()
{
    int T,N;
    scanf("%d",&T);
    Pprocess();
    while(T--)
    {
              char S[40]; scanf("%s",S); N=strlen(S);
              printf("%lld\n",N<2?1:dp[N-2]);
    }
    return 0;
} 
