#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

int main(){
long int n;
cin>>n;
long int secs[100001];
long int a[100000],b[100000];
long int aw = 0,bw = 0;
for(int i = 0 ; i < 2*n ; i++){
cin>>secs[i];
if(!(i%2)) { a[aw] = secs[i]; aw++; }
else {b[bw] = secs[i]; bw++;}
}
sort(secs, secs+2*n);
int ans1[100000] = {0};
int ans2[100000] = {0};

for(int i = 0 ; i < n ; i++){
if(i<n/2) { ans1[i] =1; ans2[i] = 1;}
else{
if(binary_search(secs,secs+n,a[i])) ans1[i] = 1;
else break;
}}

for(int i = 0 ; i < n ; i++){

if(binary_search(secs,secs+n,b[i])) ans2[i] = 1;
else break;
}


for(int i = 0 ; i < n ; i++) cout<<ans1[i];
cout<<endl;
for(int i = 0 ; i < n ; i++) cout<<ans2[i];
cout<<endl;
return 0;
}
