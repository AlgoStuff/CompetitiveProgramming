
#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
ll t,c=0;
cin>>t;
while(c<t){
ll n;
cin>>n;
ll i =1;
ll sum=0;
while(i < n){
if(n % i == 0){ sum = sum + i;}
i++;
}
cout<<sum<<endl;
c++;}
 
 
return 0;
} 
