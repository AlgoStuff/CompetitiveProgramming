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
vector< vector<long int> > t(100001);
char c[100001];
long int bfs(long int s){
long long int res = 1;
queue <long int> Q;
long int visit[100001]={0};
long int level[100001]={0};
visit[s] = 1;
level[s] = 1;
Q.push(s);
while(!Q.empty()){
visit[Q.front()] = 1;
long int front = Q.front();
Q.pop();
for(vector<long int>::iterator it = t[front].begin(); it  != t[front].end();++it){

if(!visit[*it] && c[*it]=='b'){
visit[*it]=1;
if(*it != front){
Q.push(*it);
level[*it] = level[front]+1;
}
}
else if(c[*it] == 'r'){
return level[front];
}
}}}
 int main(){
long int ct=0,n,q,v1,v2;
cin>>n;
for(long int i = 1; i <= n ; i++) t[i].push_back(i);
cin>>q;
c[1] = 'r';
for(long int i = 2;i<=n;i++){
c[i]='b';
}
ct = n-1;
while(ct--){
cin>>v1>>v2;
t[v1].push_back(v2);
t[v2].push_back(v1);
}
long int qs,vq;
while(q--){
cin>>qs>>vq;
if(qs== 1) c[vq] = 'r';
else{
if(c[vq] == 'r') cout<<0<<endl;
else{
cout<<bfs(vq)<<endl;}
}
}
}
