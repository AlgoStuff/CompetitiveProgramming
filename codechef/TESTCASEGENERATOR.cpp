#include<vector>
#include<algorithm>
#include<iostream> 
using namespace std;
// int res[1000000][5];
 int a[1001][1001];
 int n;
int foo(int i,int j){
int resl = 0;
int key = a[i][j];
for(int k = j ; a[i][k] == key && k <= n ; k++) {resl++;}
return resl;
}  
 
int main(){
cout<<1000<<endl;
for(int i = 0 ; i < 1000 ;i++){
for(int i = 0 ; i < 1000 ;i++){
cout<<1<<" ";}
cout<<endl;}
 return 0;
 } 
