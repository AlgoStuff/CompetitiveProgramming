#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
float t,n,m,u,c;
float d, r;
cin>>t;
while(t--){
int max = 0;
cin>>d;
cin>>u;
cin>>n;
float initial = d*u;
float low = initial;
//cout<<low<<endl;
for(int i = 1 ; i <= n ; i++){
cin>>m;
cin>>r;
cin>>c;
float plan = r*u + (c/m);
if( low >= plan){low = plan;  
max = i;}
}
cout<<max<<endl;
} 
return 0;}
