#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
typedef long long int ll;

int main()
{
ll m,n,a,remm=1,remn=1;
cin>>m;
cin>>n;
cin>>a;
if(m%a==0){ remm = 0;}
if(n%a==0){ remn =0;}
if(m<a &&  n >=a){
if( n%a == 0 ){ cout<<(n/a)<<endl;}
else cout<<(n/a)+1<<endl;
}
if(n<a &&  m>=a){
if( m%a == 0 ){ cout<<(m/a)<<endl;}
else cout<<(m/a)+1<<endl;
}
if( n<=a && m<=a ) cout<<1<<endl;
if(n>a && m>a){ 
if(remm == 0 && remn == 0){  cout<<(((m/a)*(n/a))+(remn*(n/a))+(remm*(m/a)))<<endl;}
else
cout<<(((m/a)*(n/a))+(remn*(n/a))+(remm*(m/a))+1)<<endl;}

return 0;
}
