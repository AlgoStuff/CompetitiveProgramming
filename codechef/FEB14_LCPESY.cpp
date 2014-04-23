#include<iostream>
#include<string.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
string s1,s2;
cin>>s1;
cin>>s2;
int a[1000] = {0};
int l1 = s1.length();
int l2 = s2.length();
for(int i = 0; i < l1 ; i++){
a[s1[i]] += 1;
}
int res = 0;
for(int i = 0; i < l2 ; i++){
if(a[s2[i]]){
a[s2[i]] -= 1;

res++;
}
}
cout<<res<<endl;
}
}

