//my header files
#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;

int main()
{
ll rem = 103993,t,c=0,n;
int s[1000001];

for(ll i =0; i < 1000001;i++){
if(rem < 33102){rem = rem*10;}
ll coe = rem/33102;
rem = rem % 33102;
s[i] = coe;
}
cin>>t;
while(c<t){
cin>>n;

for(int i =0; i <=n;i++){
if(i == 1) {cout<<".";}
cout<<s[i];
}


cout<<endl;
c++;}

return 0;
}
