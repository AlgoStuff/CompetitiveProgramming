#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
 int main(){

 
long int t,n,m;
cin>>t;
while(t--){
cin>>n;
cin>>m;
long int order[m];
long int res = 0;
for(long int i = 0; i < m;i++){
cin>>order[i]; }
long int c,volume[101][101];
for(long int i = 0 ; i < n ; i++){
long int c;
cin>>c;
volume[i][0] = c;
for(long int j = 1; j <= c ; j++){
cin>>volume[i][j];
}
sort(volume[i]+1,volume[i]+c+1);
}
long int answer = 0;
for(long int i = 0 ; i<m;i++){ answer += volume[order[i]][volume[order[i]][0]]; if(volume[order[i]][0] > 0)volume[order[i]][0]--; };
cout<<answer<<endl;

}
return 0;
}
