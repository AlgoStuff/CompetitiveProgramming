#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<ctime>
#include<cmath>
#include<string.h>
using namespace std;
int main(){
string s;
cin>>s;
int a[26]={0};
int l = s.length();
for(int  i = 0 ; i < l;i++){
a[s[i]-97]++;
}
int res = 0;
for(int i =0  ; i < 26 ; i++){
if(a[i]%2 == 1)res++;
} 
if(res <=1) cout<<"YES"<<endl;
else cout<<"NO"<<endl; 
 
 
 
 
 
 
 
 }
