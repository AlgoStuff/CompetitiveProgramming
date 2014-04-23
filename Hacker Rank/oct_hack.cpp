#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


long int n,k;
cin>>n>>k;
long long int a[n];
for(int i = 0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
long long int m  = 1000000000;
for(int i = 0; i <= n-k;i++){
if(a[i+k-1] - a[i] < m) m = a[i+k-1] - a[i];
}
cout<<m<<endl;
return 0;
}
