#include<iostream>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int m;
cin>>m;
int len = s.length();
int count = 0;
int res = 1000000;
for(int i = 0 ; i < m ; i++){
if(s[i] == 'B') count++;
}
if(res > count) res = count;
int low = 0;
int high = m;
while( high < len ){
if(s[low] == 'B') count--;
if(s[high] == 'B') count++;
if(res > count) res = count;
low++;
high++;
}
cout<<res<<endl;
}
return 0;
}
