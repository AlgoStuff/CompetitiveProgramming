#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int t,l,w,p,ct;
    double q;
    scanf("%d",&t);
    while(t--){
               scanf("%d%d",&l,&w);
               if(l>w){
                        printf("1\n");
               }
               else{
                    q=1;
                    ct=1;
                    while(.5*(q*l)<=w){
                                  ct++;
                                  q=q+1.0/ct;
                                  
                    }
                    printf("%d\n",ct);
               }
    }
   //system("pause");
   return 0;
}
