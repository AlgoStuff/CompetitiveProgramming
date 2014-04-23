#include<iostream>

using namespace std;

int main(){
int a[100001];
int pos[100001];
int res[100001];
int n,k,q;
cin>>n>>k>>q;
k=k%n;
for(int i = 1; i <= n;i++) {cin>>a[i]; if(i+k <= n)pos[i] = i + k; else if((i+k)%n == 0) pos[i] = n;else pos[i] = (i + k)%n;}
for(int i = 1; i <= n;i++) {res[pos[i]] = a[i];}
//for(int i = 1; i <= n;i++) {cout<<pos[i]<<endl;}
while(q--){
int p;
cin>>p;

cout<<res[p+1]<<endl;
}

return 0;}
