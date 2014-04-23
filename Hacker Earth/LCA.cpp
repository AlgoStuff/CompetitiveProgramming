//my header files
#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
 
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1];
char color[n+1];
for (int i = 1 ; i <=n; i++){
color[i] = 'w';
a[i] = i;
}
for(int i = 1; i <=n ; i++){
int buff,node;
cin>>buff;
while(buff--){
cin>>node;
a[node]  = i;
}
}
int root;
for(int i = 1; i <=n ; i++){if(a[i] == i) root =i;}
color[root] = 'b';
int q;
cin>>q;
while(q--){
int n1,n2;
cin>>n1;
cin>>n2;
int node = a[n1];
while( node != a[node]){
color[node] ='b';
node = a[node];
}

node = a[n2];
while( color[node] != 'b'){
node = a[node];
}
cout<<node<<endl;
for (int i = 1 ; i <n; i++){
if(i != root)
color[i] = 'w';}
}
}}







