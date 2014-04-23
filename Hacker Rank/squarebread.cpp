#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int min(int a,int b){
return a < b ? a : b;
}
int main(){
int t, l,b,res = 0;
cin>>t;
while(t--){
cin>>l;
cin>>b;
int end = min(l,b);
for(int i = 1;i<=end; i++){
if((l*b)%(i*i) == 0 && l%i == 0 && b%i ==0)res = (l*b)/(i*i);
}
cout<<res<<endl;
}

}
