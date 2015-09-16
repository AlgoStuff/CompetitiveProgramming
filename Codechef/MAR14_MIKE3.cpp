#include<iostream>  
#include<cstdio>  
#include<string.h>  
using namespace std;  
  
#define MAX 1048576
int graph[21][20001],n,m;  
int a[21][21],num[MAX],dp[MAX];  


int pre(int st){
    int lt=st&-st,t;  
    if(dp[st-lt]==0) return 0;  
    lt=-1,t=0;  
    while(st){  
        if(st&1){  
            if(lt==-1)  
                lt=t;  
            else{  
                if(a[t][lt]==1)  
                    return 0;  
            }  
        }  
        t++;  
        st>>=1;  
    }  
    return 1;  
}  
int main(){  
    int k,t;  
    num[0]=0;  
    for(int i=1;i<MAX;i++)  
        num[i]=num[i-(i&-i)]+1;  
		cin>>n>>m
        memset(graph,0,sizeof(graph));  
        for(int i=0;i<m;i++){  
            scanf("%d",&k);  
            for(int j=0;j<k;j++)  
                scanf("%d",&t),graph[i][t]=1;  
        }  
        memset(a,0,sizeof a);  
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++)  
                for(int k=1;k<=n;k++)  
                    if(graph[i][k]&&graph[j][k]){
                        a[j][i]=a[i][j]=1;break;  
                    }  
        }  
        memset(dp,0,sizeof(dp));  
        int mx=pow(2,m),ans=0;  
        dp[0]=1;  
        for(int s=1;s<mx;s++){
            if(pre(s)){  
                dp[s]=1;  
                ans=max(ans,num[s]);  
            }  
        }  
        printf("%d\n",ans);  
     
    return 0;  
} 
