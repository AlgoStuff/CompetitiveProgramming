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
char a[51][51];
int r,c,res,t;
cin>>t;
while(t--){
res =0;
cin>>r;
cin>>c;
for(int i = 1; i<= r ; i++){
for(int j = 1; j <= c ; j++){
cin>>a[i][j];
}
}
for(int i = 1; i <= r ; i++){
for(int j = 1; j <= c ; j++){
int rpos = i,cpos = j,l=0,rt=0,u=0,d=0;
if(a[i][j] == '^'){
while(a[rpos-1][j] != '#' && rpos > 1){
u++;
rpos--;
}
rpos = i;
while(a[rpos+1][j] != '#' && rpos < r){
d++;
rpos++;
}
while(a[i][cpos-1] != '#' && cpos > 1){
l++;
cpos--;
}
cpos = j;
while(a[i][cpos+1] != '#' && cpos < c){
rt++;
cpos++;
}

if(min(min(l,rt) , min(u,d)) >= 2) {res++;}
}
}}
cout<<res<<endl;
}
return 0;
}

