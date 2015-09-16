#include<iostream>
typedef long int l;
using namespace std;
int main()
{
l n,m;
cin>>n;
cin>>m;
l time[n];
time[0]=0;
l count = 1;
while(count <=n){
l c,t;
cin>>c;
cin>>t;
time[count] = c*t+time[count-1];
count++;
}
l pos = 1;
while(m--){
l v;
cin>>v;
while(true){if(v<=time[pos]){ cout<<pos<<endl; break;} else pos++; }
}
}
