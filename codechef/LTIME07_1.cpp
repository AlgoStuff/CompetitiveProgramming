#include<iostream>
#include<algorithm>
using namespace std;

int  main(){
long long int  n,m;
cin>>n>>m;
long long int  a[501][501];
for(long long int  i = 1 ; i <= n ; i++){
for(long long int  j = 1 ; j <= m ; j++){
cin>>a[i][j];
}
}
long long int  q;
cin>>q;
long long int  res1 = 0;
long long int  res2 = 0;
long long int  p,b;
bool r1 = true,r2 = true;
while(q--){
cin>>p>>b;
if(p>=1 && p<=n && b >= 1 && b <= m) res1+=a[p][b];
else{
r1 = false;
}
if(p>=1 && p<=m && b >= 1 && b <= n) res2+=a[b][p];
else{
r2 = false;
}
}
if(!r1) res1 = -1;
if(!r2) res2 = -1;
cout<<max(res1,res2)<<endl;
return 0;
}
