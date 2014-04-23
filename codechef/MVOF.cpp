#include<iostream>
#include<cstdio>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int a[n];
char s[1000];
for(int i = 0 ; i < n; i++){
gets(s);
cin>>a[i];
}
for(int i = 0 ; i < n; i++){
cout<<a[i]<<endl;
}
}
return 0;
}
