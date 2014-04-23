#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int l = s.length();
int res = 1;
for(int i = 1; i <= l ;i++){

res = (res*i)%1000000007;
}

}
}
