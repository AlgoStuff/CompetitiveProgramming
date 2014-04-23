#include<iostream>

using namespace std;

int main(){
long int t,n,p,k;
cin>>t;
while(t--){
cin>>n>>p>>k;
if(n>(2*k+(p-1)))
cout<<n-(2*k+(p-1))<<endl;
else
cout<<0<<endl;
}
return 0;
}
