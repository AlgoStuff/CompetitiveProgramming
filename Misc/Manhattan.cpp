#include<iostream>
using namespace std;
long long int max(long long int a ,long long int b){
return a > b ? a : b;
}

long long int min(long long int a ,long long int b){
return a < b ? a : b;
}
int main(){

int t,n;
cin>>t;
while(t--){
cin>>n;
long long int coordinates[n][3];
for(int i = 0 ; i <n ;i++){
cin>>coordinates[i][1];
cin>>coordinates[i][2];
}
long long int  maxdist = 0,buff;
for(int i = 0 ; i < n ;i++){
buff =  max ((max(coordinates[i][1]+coordinates[i][2],coordinates[i][1]-coordinates[i][2])-min(coordinates[i][1]+coordinates[i][2],coordinates[i][1]-coordinates[i][2])), (max(coordinates[i][1]-coordinates[i][2],coordinates[i][1]-coordinates[i][2]) - min(coordinates[i][1]-coordinates[i][2],coordinates[i][1]-coordinates[i][2])) );
if(maxdist < buff ) maxdist = buff;
}
cout<<maxdist*maxdist<<endl;

}}
