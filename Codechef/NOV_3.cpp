#include<iostream>

using namespace std;

int main(){
int n,t;
cin>>t;
while(t--){
cin>>n;
long long int a[n];
int pos;
for(int i = 1 ; i <= n ; i++){
cin>>a[i];
}
cin>>pos;
int res = 1;
for(int i = 1; i <= n ; i++){
if(a[i] < a[pos])res++;
}
cout<<res<<endl;
}
return 0;
}
