#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;
int main(){
int a[6][6];
bool visit[6][6];
for(int i = 1; i <= 5 ; i++){
for(int j = 1; j <= 5 ; j++){
cin>>a[i][j];
visit[i][j] = false;
}
}
queue<pair<int , int> > ans;
int row = 1 , col = 1;
while(!visit[row][col] && !(row == a[row][col]/10 && col == a[row][col]%10)){
ans.push(make_pair(row,col));
visit[row][col] = true;
int r = row;
row = a[row][col]/10;
col = a[r][col]%10;

}
if(visit[row][col]) cout<<"NO TREASURE"<<endl;
else { 
ans.push(make_pair(row,col));
while(!ans.empty()){
cout<<ans.front().first<<" "<<ans.front().second<<endl;
ans.pop();
}}
return 0;}
