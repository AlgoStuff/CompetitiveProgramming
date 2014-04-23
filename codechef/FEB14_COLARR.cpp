#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
bool compare(pair <int , int> a , pair < int , int > b){
return a.first > b.first;
}
int main(){
int m,n,t,k;
int a[1001];
scanf("%d",&t);
while(t--){
scanf("%d %d %d",&n,&m,&k);
for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
int points[n][m];
int cost[n][m];

for(int i = 0 ; i < n ; i++){
for(int j = 0; j < m ;j++){
scanf("%d",&points[i][j]);
}
}

for(int i = 0 ; i < n ; i++){
int maxi = 0;
for(int j = 0; j <  m;j++){
scanf("%d",&cost[i][j]);
cost[i][j] = points[i][j] - cost[i][j];
maxi = max(maxi,cost[i][j]);
}
cost[i][0] = maxi;
}

vector < pair<int , int> > mod(n);
int mods=0;
int old_a[1000];
int new_a[1000];
for(int i = 0 ; i < n ; i++){
if(cost[i][0] > points[i][a[i]-1]) { new_a[i] = cost[i][0]; mod[mods].first = cost[i][0]-points[i][a[i]-1]; mod[mods].second = i; mods++;  }
else new_a[i] = points[i][a[i]-1];
old_a[i] = points[i][a[i]-1];
}

sort(mod.begin(),mod.begin()+mods,compare);


for(int i = 0; i < mods && i < k;i++){
old_a[mod[i].second] = new_a[mod[i].second];
}


int res = 0;
for(int i = 0; i < n; i++) res += old_a[i];
printf("%d\n",res);
}
return 0;
}
