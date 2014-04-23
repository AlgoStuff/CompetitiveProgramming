#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<stack>
#include<cmath>
typedef unsigned long long int ull;
using namespace std;
bool gcd(int a,int b){
while(a!=b){
if(a>b) a = a -b;
else b = b-a;
}
return(a==1);
}
int main(){
int t;
ull n,res;
cin>>t;
while(t--){
cin>>n;
res = n/2;
while(res > 0){
if(gcd(n,res)){cout<<res<<endl; break;}
res--;
}
}
return 0;}
