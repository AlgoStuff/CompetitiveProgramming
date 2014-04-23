#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
  int jacobsthal( int n){
if(n==0) return 0;
if(n==1) return 1;
 int a = 1 , b = 1, c=0;
  for ( int i = 2; i <= n; i++)
  {
     c =( 2*a + b)%98765431;
     a = b%98765431;
     b = c%98765431;
  }
  return b;
}
int main(){
 int jt,n,t,sum = 0;
scanf("%d",&n);
scanf("%d",&t);
  int a[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&a[i]);
sum +=a[i];
}


jt = jacobsthal(t-1);
for( int i = 0 ; i < n ; i++){
if(t%2)
printf("%d \n",(((jt%98765431)*(sum%98765431)%98765431) - a[i]%98765431)%98765431);
else
printf("%d \n",(((jt%98765431)*(sum%98765431)%98765431) + a[i]%98765431)%98765431);
}





}
