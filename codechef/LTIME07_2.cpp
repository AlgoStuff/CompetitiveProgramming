#include<iostream>
#include<algorithm>
using namespace std;

int  main(){
long long int n,k;
cin>>n>>k;
long long int a[n];
for(int i = 1 ; i <= n ; i++){
cin>>a[i];
}
sort(a+1,a+n+1);
long long int kp;
for(kp = 1 ; kp <= n; kp++){
if(!(a[kp]%2)){
k = k - a[kp]/2;
a[kp] = a[kp]/2;
}
else{
k = k - (a[kp]/2)-1;
a[kp] = a[kp] - a[kp]/2-1;
}
if(! ( k > 0) || kp == n) break;
}
long long int s = 0;
for(int i = 1 ; i <= n ; i++){
if(a[i] == 0) s++;
}

if(k == 0){
cout<<n-kp<<" "<<s<<endl;
return 0;
}
else if(k < 0){
if(kp == n) cout<<0<<" "<<s<<endl;
else{
cout<<n-kp+1<<" "<<s<<endl;}
return 0;
}

else{
for(kp = 1 ; kp <= n; kp++){
k = k - a[kp];
if(! ( k > 0) || kp == n) break;
}
if(k>=0){
cout<<0<<" "<<kp<<endl;
return 0;
}
else{

cout<<0<<" "<<kp-1<<endl;
return 0;
}
}
return 0;
}
