#include<iostream>
#include<string.h>
using namespace std;
bool board[101][101];


int main(){

int t;
cin>>t;
while(t--){
for(int i = 1; i <= 100;i++)
for(int j = 1; j <= 100;j++) board[i][j] = false;
char kc,bkcx,wkcx,kcx;
int bkx,bky,wkx,wky,kx,ky;
cin>>bkcx>>bky>>wkcx>>wky;
cin>>kc>>kcx>>ky;
bkx = bkcx-96;
wkx = wkcx - 96;
kx = kcx - 96;
if(wkx-1 > 0)
board[wkx+1][wky] = true;
if(wkx-1 > 0)
board[wkx-1][wky] = true;
board[wkx][wky+1] = true;
if(wky-1 > 0)
board[wkx][wky-1] = true;
if(wkx-1 > 0)
board[wkx-1][wky+1] = true;
if(wky-1 > 0)
board[wkx+1][wky-1] = true;
board[wkx+1][wky+1] = true;
if(wkx-1 > 0 && wky-1 > 0)
board[wkx-1][wky-1] = true;
if (board[bkx][bky]){ cout<<"check"<<endl; continue;}
if(kc == 'k'){

board[kx+2][ky+1] = true;
if(ky-1>0)
board[kx+2][ky-1] = true;
if(kx-1>0)
board[kx-1][ky+2] = true;
board[kx+1][ky+2] = true;
if(kx-2>0)
board[kx-2][ky+1] = true;
if(ky-1>0 && kx -2 > 0)
board[kx-2][ky-1] = true;
if(ky-2>0 && kx - 1 > 0)
board[kx-1][ky-2] = true;
if(wky-2>0)
board[kx+1][ky-2] = true;

if (board[bkx][bky]){ cout<<"check"<<endl; continue;}
else {cout<<"-1"<<endl; continue;}
}
else if(kc == 'r' && (bkx == kx || bky == ky)){
cout<<"check"<<endl;
continue;
}
else if (kc == 'b'){
for(int i = 1 ; i<=8;i++){
board[kx+i][ky+i] = true;
}
for(int i = 1 ; i<=8 && kx - i > 0 && ky - i > 0;i++){
board[kx-i][ky-i] = true;
}
for(int i = 1 ; i<=8 &&  ky - i > 0;i++){
board[kx+i][ky-i] = true;
}
for(int i = 1 ; i<=8 && kx - i > 0 ;i++){
board[kx-i][ky+i] = true;
}
if (board[bkx][bky]){ cout<<"check"<<endl; continue;}
else {cout<<"-1"<<endl; continue;}
}
else if(kc == 'q'){
if(bkx == kx || bky == ky){
cout<<"check"<<endl;
continue;
}
else{
for(int i = 1 ; i<=8;i++){
board[kx+i][ky+i] = true;
}
for(int i = 1 ; i<=8 && kx - i > 0 && ky - i > 0;i++){
board[kx-i][ky-i] = true;
}
for(int i = 1 ; i<=8 &&  ky - i > 0;i++){
board[kx+i][ky-i] = true;
}
for(int i = 1 ; i<=8 && kx - i > 0 ;i++){
board[kx-i][ky+i] = true;
}
if (board[bkx][bky]){ cout<<"check"<<endl; continue;}
else {cout<<"-1"<<endl; continue;}
}
}
}
return 0;
}
