#include<iostream>
using namespace std;
int main(){
long int t,n;
cin>>t;
while(t--){
cin>>n;
if(n%2) cout<<(n/2)*((n/2)+1)<<endl;
else cout<<((n-1)/2)*(((n-1)/2) + 1) + n/2<<endl;



}


return 0;}
