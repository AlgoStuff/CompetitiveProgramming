#include<vector>
#include<algorithm>
#include<iostream> 
using namespace std;
// int res[1000000][5];
 int a[1001][1001];
 int color[1001][1001];
 int len[1001][1001];
 int n;
int foo(int i,int j){
int resl = 0;
int key = a[i][j];
for(int k = j ; a[i][k] == key && k <= n ; k++) {resl++;}
return resl;
}  
 
int fii(int i,int j){
int resl = 0;
int key = a[i][j];
for(int k = i ; a[k][j] == key && k <= n ; k++) {resl++;}
return resl;
} 
int main(){
 
 cin>>n;
 
 for( int i = 1; i <= n;i++){
 for( int j = 1; j <= n;j++){
 cin>>a[i][j];
 color[i][j] = a[i][j];
 len[i][j] = 0;
 }}
 
int count = 0;
 for( int i = 1; i <= n;i++){
 for( int j = 1; j <= n;j++){
 if(a[i][j]){
 int chk = 0;
int ryt = foo(i,j);
int dwn = fii(i,j);
 
if(ryt>dwn){
len[i][j] = -1*ryt;
chk = 1;
}
else{
len[i][j] = dwn;
}
if(chk){
for( int col = j; col < j+ryt;col++) a[i][col] = 0;}
else{
for( int row = i; row < i+dwn;row++) a[row][j] = 0;
} 
 count++;
}
}
}
 cout<<count<<endl;
 
 for( int i = 1; i <= n;i++){
 for( int j = 1; j <= n;j++){
 if(color[i][j] && len[i][j]){
 int jump = len[i][j];
if(len[i][j]< 0){
jump = jump * -1;
 cout<<color[i][j]<<" "<<i<<" "<<i<<" "<<j<<" "<<j+jump-1<<endl;
 }
 else{
 cout<<color[i][j]<<" "<<i<<" "<<i+jump-1<<" "<<j<<" "<<j<<endl;
}
}
}
 }
 
 return 0;
 }  
