#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long int ll;
void print(ll n){
cout<<n<<" ";
if(n>1){
print(n-1);
print(1);}
}
int main(){
ll n,c=0;
cin>>n;
while(c<n){
print(n); print(c);
cout<<endl; c++;}


}
