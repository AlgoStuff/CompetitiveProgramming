#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
ll t,n;
cin>>t;
while(t--){
cin>>n;
ll a[n],b[n];

ll max[n],min[n];
min[n+1] = 10000000;
max[0] = -10000000;
ll s = 0;
for(ll i = 1; i <= n; i++){
cin>>a[i];

if(a[i]>max[i-1]) max[i] = a[i];
else max[i] = max[i-1];
}
for(ll i = n; i >= 1; i--){

if(a[i]<min[i+1]) min[i] = a[i];
else min[i] = min[i+1];
}


for(ll i = 1; i <= n; i++){

if(a[i] >=max[i] && a[i] <= min[i]) s++;
}
cout<<s<<endl;
}
}
