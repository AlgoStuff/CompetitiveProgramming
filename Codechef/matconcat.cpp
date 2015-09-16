#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"No of colomns  : ";
cin>>n;
cout<<"No of Rows : ";
cin>>m;
cout<<"Enter elements : ";
int mat[m][n],mat2[m][(2*n)];

for(int i = 0 ; i < m ; i++){for(int j = 0; j < n ; j++){ cin>>mat[i][j];}}


for(int i = 0; i < m; i++){for(int j = 0; j < n;j++){  mat2[i][j] = mat[i][j];}}
for(int i = 0 ; i < m ; i++){for(int j = n; j < (2*n) ; j++){   mat2[i][j] = mat[i][j-n];}}

for(int i = 0 ; i < m ; i++){for(int j = 0; j < (2*n) ; j++){ cout<<mat2[i][j]<<" ";}cout<<endl;}

return 0;
}
