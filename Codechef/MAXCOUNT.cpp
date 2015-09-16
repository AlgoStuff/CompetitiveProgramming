#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
int  buff,t , n;
cin>>t;
while(t--){
cin>>n;
int a[10001] = {0};
for(int i = 0 ; i < n ; i++){
cin>>buff;
a[buff]++;
}
int max = 0;
int pos = 1;
for(int i =10000 ;  i > 0 ; i--){
if(max <= a[i]) {pos = i;
 max = a[i];}
}
cout<<pos<<" "<<max<<endl;
}





}
