#include<iostream>

using namespace std;

char board[50][50];
int m , n ;
bool checkinside(int starti,int startj,int endi,int endj){
for(int i = starti; i <= endi ; i ++){
for(int j = startj; j <= endj ; j ++){

if(board[i][j] != '#'){ return false;}

}
}
return true;
}

bool checkoutside(int starti,int startj,int endi,int endj){
for(int i = 0; i < m ; i ++){
for(int j = 0 ; j < n ; j ++){
if(!(i >= starti && i <= endi && j >= startj && j <= endj)){
if(board[i][j] == '#'){return false;}
}
}
}
return true;
}
int main(){
int t , c = 1;
cin>>t;
while(c<=t){
cin>>n;
m = n;
for(int i = 0; i < m ; i ++){
for(int j = 0 ; j < n ; j ++){
cin>>board[i][j];
}
}

int starti = -1, startj = -1;
for(int i = 0; i < m && starti == -1; i ++){
for(int j = 0 ; j < n ; j ++){
if(board[i][j] == '#'){
starti = i;
startj = j;
break;
}
}}
if(starti == -1){

cout<<"Case #"<<c<<": "<<"NO"<<endl;
}
else{
int side = 0;
for(int i = startj;i < m;i++){
if(board[starti][i] == '#')side++;
}
if(!checkinside(starti,startj,starti+side-1,startj+side-1) || !checkoutside(starti,startj,starti+side-1,startj+side-1)) {


cout<<"Case #"<<c<<": "<<"NO"<<endl;}
else{

cout<<"Case #"<<c<<": "<<"YES"<<endl;
}
}
c++;
}
return 0;
}
