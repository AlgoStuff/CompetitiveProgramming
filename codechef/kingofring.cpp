#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int m,n,count=0;
    int a[10001],b[10001];
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
        a[i]=(i+1);
        a[m]=1;
    for(int i=1;i<=m;i++)
        b[i]=(i-1)%m;
        b[1]=m;
        scanf("%d",&n);
        int i=1,t;
    while(1){
        t=i;
        i=a[i];
        count++;
        if(t==i)
            break;
        if(count==n){
            a[b[t]]=i;
            b[i]=b[t];
            count=0;
        }
    }
    printf("%d",i);
    return 0;
}
