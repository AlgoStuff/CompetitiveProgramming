#include<iostream>
using namespace std;
typedef  long long int l;
int main(){
l t,r,v;
cin>>t;
l c = 0;

while(t--){
c++;
cin>>r;
cin>>v;
cout<<"Case #"<<c<<": ";

l n=0;
while(v>=0)
{

n++;
v = v - (r+1)*(r+1) + r*r; 
r =r+2;
}
cout<<n-1<<endl;


}






return 0;
}
