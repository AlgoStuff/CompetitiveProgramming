#include<iostream>
using namespace std;
int main(){
unsigned long long int t,n,res;
cin>>t;
while(t--){
res = 1;
cin>>n;
if(n%2 == 0){
for(int i = 1; i <=n; i++){if(i%2 != 0) res*= 26;
else res*= 1;}
cout<<res<<endl;
}

else {
for(int i = 1; i <=n-1; i++){if(i%2 != 0) res*= 26;
else res*= 1;}
cout<<res*26%1000000007<<endl;
}





}}
