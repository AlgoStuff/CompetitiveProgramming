//my header files
#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef unsigned long long int ll;
#define MAX 168
bool binsearch(ll a[],ll key,ll n){


ll mid,begin = 0 ,end = n-1;

int check = 0;

while( begin <= end && check == 0 )
  {
       mid = ( begin + end )/ 2;

     if (a[mid] == key )
       {
         return true;
        }
     else  if (a[mid] > key)
                       {
                end = mid -1;
                       }
     else  if (a[mid] < key )
            {
             begin = mid + 1; }
     else
        check = 1;
 }

if ( check == 0  ){
        return false;}
cout<<endl;
}
int main()
{
ll n = 10000;
int a[n];
ll primes[MAX],checks;
for (int i = 0; i <=n ; i++)
  {
      a[i] = 1;
}

for(int i = 2; i <= sqrt(n);i++)
       { if ( a[i] ){ int k = 0;
                       while(((i*i) +(k*i)) <=n ){

                                        a[((i*i) +(k*i))] = 0;
                                          k++;}}}
                                          ll j = 0;
                                          checks = 2;
while(checks <= n ){ if (a[checks]) {primes[j] = checks;} j++; checks++;}
ll t,c = 0,data;
cin>>t;
while(c<t){
cin>>data;
if(data == 3){ cout<<3<<endl; c++; continue;}
bool check = binsearch(primes,data,168);
if(check) cout<<2<<endl;
if(!check) cout<<1<<endl;
c++;
}


return 0;
}
