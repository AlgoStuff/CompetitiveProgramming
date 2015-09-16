#include<iostream>
 
using namespace std;
 
int main(){
int n,k,t;
cin>>t;
while(t--){
cin>>n>>k;
long long int a[n+1][k+1];
long long int res[k];
for(int i = 0 ; i < n ; i++){
for(int j = 0  ; j < k ; j++){
cin>>a[i][j];
}
}
for(int j = 0  ; j < k ; j++)cin>>res[j];
int ans = 0;
int as[100000];
for(int i = 0 ; i < n ; i++){
bool over = false;
for(int j = 0  ; j < k ; j++){ 
 
if(res[j] - a[i][j]<0){
over = true;
break;
}
}
if(!over){
for(int j = 0  ; j < k ; j++){ 
res[j] = res[j] - a[i][j];
}
ans++;
as[ans]=i+1;
}
}
if(ans == 0) cout<<0<<endl;
else{
cout<<ans<<endl;
for(int i = 1 ; i <= ans ; i++)cout<<as[i]<<" "; 
cout<<endl;
}}
return 0;
} 
