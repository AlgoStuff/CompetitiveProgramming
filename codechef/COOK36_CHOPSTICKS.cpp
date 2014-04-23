#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int size,d;
cin>>size;
cin>>d;
int n  = size;
int arr[size];
for(int i = 0; i < n; i++)cin>>arr[i];
sort(arr,arr+n);
int res = 0;
for(int i = 0; i < n-1; i++){
if(arr[i+1]-arr[i] <= d) {res++; i++; }
}
cout<<res<<endl;
return 0;
}
