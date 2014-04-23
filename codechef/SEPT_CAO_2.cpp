#include<vector>
#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
#include<cstdio>
#include<iomanip>
#include<map>
#include<algorithm>
#include<list>
using namespace std;

int main(){
char a[501][501];
int r,c,res,t;
cin>>t;
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499};

while(t--){

res =0;
cin>>r;
cin>>c;
int left[r+2][c+2],right[r+2][c+2],up[r+2][c+2],down[r+2][c+2];
for(int i = 1;i<=r;i++){
left[i][0] = 0;
right[i][c+1] = 0;
}
for(int i = 1;i<=c;i++){
up[0][i] = 0;
down[r+1][i] = 0;
}

for(int i = 1; i<= r ; i++){
for(int j = 1; j <= c ; j++){
cin>>a[i][j];
}
}
for(int i = 1; i <= r ; i++){
for(int j = 1; j <= c ; j++){
if(a[i][j] == '^'){
if( i==1 && j == 1){
left[i][j] = 0;
up[i][j] = 0;
}
else if ( i == 1 ) { 
up[i][j] = 0;
left[i][j] = left[i][j-1]+1;
}
else if ( j == 1){
up[i][j] = up[i-1][j]+1;
left[i][j] = 0;
}
else{
left[i][j] = left[i][j-1]+1;
up[i][j] = up[i-1][j]+1;
}}
else{
left[i][j] = -1;
up[i][j] = -1;
}
if(a[r+1-i][c+1-j] == '^'){
if( i == 1 && j == 1){
right[r+1-i][c+1-j] = 0;
down[r+1 -i][c+1-j] = 0;
}
else if ( i == 1){
down[r+1 -i][c+1-j] = 0;
right[r+1-i][c+1-j] = right[r+1-i][c-j+2]+1;
}
else if ( j == 1){
right[r+1-i][c+1-j] = 0;
down[r+1-i][c+1-j] = down[r-i+2][c+1-j]+1;
}
else{
right[r+1-i][c+1-j] = right[r+1-i][c-j+2]+1;
down[r+1-i][c+1-j] = down[r-i+2][c+1-j]+1;
}
}
else{
right[r+1-i][c+1-j] = -1;
down[r+1 -i][c+1-j] = -1;
}}}

for(int i = 1; i <= r ; i++){
for(int j = 1; j <= c ; j++){
int mini = min(min(left[i][j],right[i][j]),min(up[i][j],down[i][j]));
for(int i = 0 ; primes[i] != '\0' ; i++)
if( mini >= primes[i]) res++;
}}
cout<<res<<endl;
}
return 0;
}

