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


bool IsPrime(ll num)

{
if(num==2)

        return true;

    if(num%2==0)

        return false;

    ll sRoot = sqrt(num*1.0);

    for(ll i=3; i<=sRoot; i+=2)

    {

        if(num%i==0)

            return false;

    }

    return true;
}


int main()
{
ll t,n,c=0;
cin>>t;
while(c<t)
{
cin>>n;
int count = 0;
bool prime = IsPrime(n);
if(prime){cout<<"NO"<<endl; c++; continue;}
if(!prime){ for(ll i=1;i<=n;i++){{if((n%i) == 0) count++;} }}

if(count == 3){cout<<"YES"<<endl;} 
else cout<<"NO"<<endl;
c++;
}

return 0;
}
