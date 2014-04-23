#include<iostream>
#include<string.h>
using namespace std;
int main(){
int r,c;
cin>>r;
cin>>c;
char Cake[r][c];
bool row[r];
bool col[c];
for(int i = 0 ; i < r;i++){
row[i] = false;
}
for(int j = 0 ;j < c;j++){
col[j] = false;
}
for(int i = 0 ; i < r;i++){
for(int j = 0 ;j < c;j++){
cin>>Cake[i][j];
if(Cake[i][j] == 'S'){
row[i] = true;
col[j] = true;
}
}
}
int res = 0;
for(int i = 0 ; i < r;i++){
if(row[i] == false ){
for(int j = 0 ;j < c;j++){
if(Cake[i][j] == '.'){
res++;
Cake[i][j] = '*';
}
}
}
}

for(int j = 0 ; j < c;j++){
if(col[j] == false ){
for(int i = 0 ;i < r;i++){
if(Cake[i][j] == '.'){
res++;
Cake[i][j] = '*';
}
}
}
}

cout<<res<<endl;


return 0;
}
