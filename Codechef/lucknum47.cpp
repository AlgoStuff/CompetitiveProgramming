#include<iostream>
using namespace std;
typedef unsigned long long int ul;
bool islucky(ul num){
ul c = 0;
while(num != 0){
if(num%10 == 4 || num%10 == 7) c++;
num = num/10;
}
if(c == 4 || c == 7) return true;
return false;
}
int main(){
ul t,l,r;
cin>>t;
while(t--){
cin>>l;
cin>>r;
ul count = 0;
for(ul i = l ; i <= r ; i++){
if(islucky(i)) count++;
}
cout<<count%1000000007<<endl;
}
return 0;} 
