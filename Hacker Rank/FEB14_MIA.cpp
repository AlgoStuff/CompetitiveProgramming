#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
string s1;
string s2;
cin>>s1;
cin>>s2;
int l1 = s1.length();
int l2 = s2.length();

int h1[26] = {0};
int h2[26] = {0};
for(int i = 0 ; i < l1 ; i++) h1[s1[i]-97]++;
for(int i = 0 ; i < l2 ; i++) h2[s2[i]-97]++;
int res = 0;
for(int i = 0 ; i < 26 ; i++) res += max(h1[i],h2[i]) - min(h1[i],h2[i]);
cout<<res<<endl;
return 0;}

