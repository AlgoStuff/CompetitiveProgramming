#include<iostream>
using namespace std;

int main(){
long long int a[1000000];
a[0] = 1;
a[1] = 1;
for(int i = 2; i<= 1000000; i++) a[i] = (a[i-1])%1000000007 + (a[i-2])%1000000007;
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
if(n<= 1000000) cout<<a[n]<<endl;
else{
long long int a1 = a[999999], a2 = a[1000000],res;
 
for(int i = 1000001; i <= n;i++){
res = a1%1000000007 + a2%1000000007;
a1 = a2;
a2 = res;
}
cout<<res<<endl;
}
}
}
