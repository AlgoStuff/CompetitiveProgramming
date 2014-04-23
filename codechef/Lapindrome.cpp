#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
#define rep(i,n) for (int i = 0; i < n;i++)
#define repj(j,n) for (int j = 0; j < n;j++)
#define repji(j,i,n) for(int j = i; j < n ; j++)

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
string s,l,r;
cin>>s;
bool check = false;
int len = s.length();
int a[26] = {0};
if(len%2 == 0){
for(int i  = 0; i < len/2 ; i++) a[s[i] -97]++;
for(int i  = len/2; i < len ; i++) a[s[i] -97]--;
for(int i  = 0; i < 26 ; i++) {if(a[i] != 0) check = true;}
if(check) cout<<"NO"<<endl;
else cout<<"YES"<<endl;}
else{
for(int i  = 0; i < len/2 ; i++) a[s[i] -97]++;
for(int i  = len/2+1; i < len ; i++) a[s[i] -97]--;
for(int i  = 0; i < 26 ; i++) {if(a[i] != 0) check = true;}
if(check) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}





}




}
