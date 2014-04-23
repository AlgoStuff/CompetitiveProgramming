#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int sumdig(int n){
int res = 0;
while (n > 0){
res = res + n%10;
n = n/10;
}
return res;
}
 int main(){
 
int  primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };
 int a,b,t;
 cin>>t;
 while(t--){
 int res = 0;
 cin>>a;
 cin>>b;
 for(int i = a ; i<=b;i++){
int  p = sumdig(i);
 for(int j = 0 ; j < 12 ; j++){
 if(primes[j] == p){res++; break;}
 }
 }
 cout<<res<<endl;
 }
return 0;}
