#include<iostream>
using namespace std;
int main(){
unsigned long long int n;
cin>>n;
unsigned long long int a[n];
for(int i = 0 ; i < n ; i++) cin>>a[i];
unsigned long long int sum = 0;
for(int i = n-1 ; i > 0 ; i--){
sum = sum+ (a[i]&a[i-1]);
}
cout<<sum<<endl;

return 0;
}
