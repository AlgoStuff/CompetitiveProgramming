#include<iostream>

using namespace std;
long long int func(long long int n){
if(n == 0) return 1;
else
{
if(n%2)
return (2*(func((n-1)/2)%1000000007)*(func((n-1)/2)%1000000007))%1000000007;
else
return ((func(n/2)%1000000007)*(func(n/2)%1000000007))%1000000007;
}
}
int main(){
int t;
long long int n;
cin>>t;
while(t--){
cin>>n;
cout<<func(n)-1<<endl;
}
return 0;
}
