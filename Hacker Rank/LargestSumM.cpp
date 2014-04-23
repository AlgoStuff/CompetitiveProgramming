#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;
int main(){
int n,k,m;
cin>>n>>k>>m;
int a[n];
for (int i = 0 ; i < n; i ++){
cin>>a[i];
}
int max = 0;
for (int i = 0 ; i < n; i ++){
for (int i = 0 ; i < n; i ++){
if(a[i]+a[j] > max && a[i]+a[j] < m) max = a[i]+a[j];
}}

return 0;}
