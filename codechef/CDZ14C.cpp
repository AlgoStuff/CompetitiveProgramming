#include<iostream>
#include<algorithm>
#include<cstdio>
#include<set>
using namespace std;
int a[1001][1001];
bool b[1001][1001];
long int res = 10000000;
int n,m,t;
set <int> answ;
int foo(int r, int c,long int ans,int prev){
int curr = a[r][c];
if(r < 1 || r > n || c < 1 || c > m || curr == prev || b[r][c]) return 0;

if(r ==n && c == m) {res = 0;answ.insert(ans); return 0;}
b[r][c] = true;
if(curr == 1){
foo(r,c+1,ans+1,1);
foo(r+1,c,ans+1,1);
foo(r,c-1,ans+1,1);
foo(r-1,c,ans+1,1);
}
if(curr == 0){
foo(r,c+1,ans+1,0);
foo(r+1,c,ans+1,0);
foo(r,c-1,ans+1,0);
foo(r-1,c,ans+1,0);
}
}

int main(){
scanf("%d",&t);
while(t--){
scanf("%d %d",&n,&m);
res = 10000000;
for(int i = 1 ; i <= n ; i++){
for(int j = 1 ; j <= m ; j++){
scanf("%d",&a[i][j]);
b[i][j] = false;
}
}
if(a[1][1] == 1)
foo(1,1,1,0);
else
foo(1,1,1,1);
if(res == 10000000)
cout<<-1<<endl;
else

{
set<int>::iterator it=answ.begin();
cout<<*it<<endl;
}
}

return 0;
}
