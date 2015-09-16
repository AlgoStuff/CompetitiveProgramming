#include<iostream>
#include<algorithm>
using namespace std;
long long int a[1001];
int main(){
int n;
cin>>n;
long long int pulkit = 0;
for(int i = 0;i<n;i++){
cin>>a[i];
}
long long int pandya = 0;
int l = 0;
int r = n-1;
for(int i = 0;i<n;i++){
if(i%2){
if(a[l]>a[r]){
pandya += a[l];
l++;
}
else{
pandya += a[r];
r--;
}
}
else{
if(a[l]>a[r]){
pulkit += a[l];
l++;
}
else{
pulkit += a[r];
r--;
}
}
}
cout<<pulkit<<" "<<pandya<<endl;
return 0;
}
