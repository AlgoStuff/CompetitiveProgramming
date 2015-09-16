#include <iostream>
#include <cmath>
#include <stack>
#include<cstdio>

using namespace std;

int dp[1001][1001],h[1001][1001],l[1001][1001],r[1001][1001],a[1001][1001];
void maxinline(int n,int m){
for(int i=0; i<n; i++){
stack<int> s;
s.push(0);
l[i][0]=-1;
for(int j=1; j<m; j++)
{int check=0;
while(!s.empty())
{int x=s.top();
if(h[i][j]<=h[i][x])
s.pop();
else
{check=1;
l[i][j]=x;
break;
}}
if(!check) l[i][j]=-1;
s.push(j);
}}}

int main()
{
int n,m,k;
scanf("%d %d %d", &n,&m,&k);
int x,y;
for(int i=0; i<k; i++) {
scanf("%d %d",&x,&y);
a[x-1][y-1]=1;
}
for(int i=0;i<m;i++) {
if(a[0][i]) h[0][i]=0;
else h[0][i]=1;
}
for(int i=1; i<n; i++){
for(int j=0; j<m; j++){
if(a[i][j]) h[i][j]=0;
else h[i][j]=h[i-1][j]+1;}}
maxinline(n,m);
for(int i=0;i<n;i++){
stack<int> s;
s.push(m-1);
r[i][m-1]=m;
for(int j=m-2;j>=0;j--) {
while(!s.empty())
{
x=s.top();
if(h[i][j]<=h[i][x]) s.pop();
else
{
r[i][j]=x;
break;
}}if(r[i][j]==0) r[i][j]=m;
s.push(j);
}}

int area = 0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
{
if(h[i][j]!=0){
area=(r[i][j]-l[i][j]-1)*(h[i][j]);
if(dp[i-h[i][j]+1][i]<area) {
dp[i-h[i][j]+1][i]=area;
}}}}
for(int j=0;j<n;j++){
for(int i=0;i<=j;i++){
if(i){area=dp[i-1][j];
area=area/(j-i+2);
area*=(j-i+1);
dp[i][j]=max(dp[i][j],area);
}}}
for(int i=0;i<n;i++)
{for(int j=i;j<n;j++){
if(j)
dp[i][j]=max(dp[i][j],dp[i][j-1]);
}}
for(int j=n-1;j>=0;j--){
for(int i=j;i>=0;i--){
dp[i][j]=max(dp[i+1][j],dp[i][j]);}}
int L,q,H;
scanf("%d",&q);
while(q--){
scanf("%d %d",&L,&H);
printf("%d\n",dp[L-1][H-1]);}
return 0;
}
