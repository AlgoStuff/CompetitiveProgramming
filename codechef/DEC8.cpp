#include<vector>
#include<algorithm>
#include<iostream> 
using namespace std;
 
 
int main(){
 
int buff;
int a[301][301];
int dp[301][301][10];
for(int i = 1 ; i <= 300 ; i++){
for(int k = 1 ; k <= 10 ; k++){
dp[i][0][k] = 0;
}}
int n,q;
cin>>n;
for(int i = 1 ; i <= n ; i++){
for(int j = 1 ; j <= n ; j++){
cin>>a[i][j];
}}

for(int i = 1 ; i <= n ; i++){
int hash[11] = {0};
for(int j = 1 ; j <= n ; j++){
hash[a[i][j]]++;
for(int k = 1 ; k <= 10 ; k++){
dp[i][j][k] = hash[k];
}}}
cin>>q;
int x1,x2,y1,y2;
while(q--){
cin>>x1>>y1>>x2>>y2;
if( x1 == x2 && y1 == y2) cout<<1<<endl;
else{
int hash[11] = {0};
int count = 0;
for(int i = x1 ; i <= x2 && count < 10; i++){
for(int j = 1 ; j <= 10 ; j++){
if(dp[i][y2][j] - dp[i][y1-1][j] > 0 && hash[j] == 0) {
hash[j] = 1;
count++ ;
}
}}
cout<<count<<endl;
}
}
return 0;
}  
