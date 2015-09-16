#include<iostream>
#include<vector>
using namespace std;
int n;
int q;
int a[50001] = {0};
unsigned long long int res1=0,res2=0,tempres1=0;
vector < vector <int> > graph(50001);
int visited[50001] = {0};
int dfs(int root,int c,int o){
//cout<<"visited "<<root<<endl;
int counted; 
int ret = 0;
if(a[root]) {tempres1++; c++;
//cout<<"packing "<<o<<" at "<<root<<endl;
 res2++; res2+=o; counted = 1; o = 0;}
else {counted = 0; o++;}
visited[root] = 1;

//cout<<"In "<<root<<" Values of Closed is "<<c<<" and opened is "<<o<<endl;
for(vector<int>::iterator it = graph[root].begin(); it != graph[root].end() ; ++it){
if(!visited[*it]){
//cout<<"going to "<<*it<<" from "<<root<<endl;
if(a[root])
counted = dfs(*it,c,0);
else
counted = dfs(*it,c,o);

if(counted == 1){ o = 0; ret = 1;}

}
}
//cout<<"coming back from "<<root<<endl;
if(a[root]){
//cout<<root<<" returns :"<<1<<endl;
 return 1;}
else{
//cout<<root<<" returns :"<<ret<<endl;
return ret;}
}

int main(){
cin>>n>>q;

for(int i = 1; i <= n; i++){
cin>>a[i];
}

while(q--){
int a,b;
cin>>a>>b;
graph[a].push_back(b);
graph[b].push_back(a);
}


for(int i = 1; i <= n ; i++){
if(!visited[i] && a[i]){
tempres1 = 0;
dfs(i,0,0);
res1 += (tempres1*(tempres1-1))/2;
if(tempres1 == 1) res2--;
}
}
cout<<res1<<" "<<res2<<endl;
return 0;
}

