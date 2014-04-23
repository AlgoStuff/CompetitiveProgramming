#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
float a[101][4];
int n,w;
cin>>n>>w;
float pro[n+1][2];
for(int i = 0 ; i < n ; i++){
cin>>a[i][1]>>a[i][2]>>a[i][3];
pro[i][1] = i;
pro[i][0] = (a[i][1]*a[i][2])/a[i][3];
}
for(int i = 0 ; i < n; i++){
for(int j = 0 ; j < n-1 ; j++){
if(pro[j][0] < pro[j+1][0]){
float a = pro[j][0];
float b = pro[j][1];
pro[j][0] = pro[j+1][0];
pro[j][1] = pro[j+1][1];
pro[j+1][0] = a;
pro[j+1][1] = b; 
}
}
}
for(int j = 0 ; j < n ; j++){
cout<<pro[j][0]<< " "<<pro[j][1]<<endl;
}
int res = 0;
for(int j = 0 ; j < n ; j++){
int pos = pro[j][1];
if(a[pos][3] <= w){
w-=a[pos][3];
res += a[pos][1]*a[pos][2];
}
}
cout<<res<<endl;
}

return 0;
}
