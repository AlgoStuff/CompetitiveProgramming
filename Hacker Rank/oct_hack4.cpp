#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

long int n;
long int a[100001][2];
for(int i = 1 ; i <= 100000 ; i++){
a[i][0] = 0;
a[i][1] = 1000000;
}
cin>>n;
int t,f;
long int pos;
bool check = true;
if(n==1)cout<<1<<endl;
else{
while(n--){
cin>>t>>f;
if(check){ pos = t; check = false;}
a[f][0]++;
if(a[f][1]>t){a[f][1] = t;} 
}
int res = 1;
int posj;
for(int i = pos ; i<= 100000 ; i++){
for(int j = i+1; j <= 100000 ; j++){
if(a[j][0] != 0){
if(j-i > a[j][1] - a[i][1]){
res++;
i = j;
break;
}
}
posj = j;
}
if( posj == 100000) break;
}
cout<<res<<endl;}
return 0;
}
