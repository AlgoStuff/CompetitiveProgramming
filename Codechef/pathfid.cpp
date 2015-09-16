#include<iostream>
using namespace std;
typedef  long long int ll;
int main(){

ll n,m,p,q,ways,t;
cin>>t;
while(t--){

cin>>n;
cin>>m;
ll a[n][m];
cin>>p;
cin>>q;

for(ll i = 0; i <n;i++){
a[i][0] = 1;}
for(ll j = 0;j < m; j++){
a[0][j] =  1;}

a[p-1][q-1] = 0;
for(ll k = 1; k <n;k++){
for(ll l = 1; l < m; l++){
if( k != p-1 || l!= q-1){

a[k][l] = a[k-1][l]+a[k][l-1];}

}}


cout<<a[n-1][m-1]<<endl;


}






return 0;}
