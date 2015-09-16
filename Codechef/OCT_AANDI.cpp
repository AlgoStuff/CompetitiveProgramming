#include<vector>
#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
#include<cstdio>
#include<iomanip>
#include<map>
#include<algorithm>
#include<list>
#include<cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int limit = sqrt(n);
int sum = 0;
for(int i = 1; i < limit+1 ; i++){
if(n%i == 0){
long int n1 = i;
long int n2 = n/i;
while(n1 != 0){
if(n1%10 == 7 || n1%10 == 4) {sum++; break;}
n1=n1/10;
}
if(i!=n/i){
while(n2 != 0){
if(n2%10 == 7 || n2%10 == 4) {sum++; break;}
n2=n2/10;
}}
}
}
cout<<sum<<endl;
}
return 0;
}
