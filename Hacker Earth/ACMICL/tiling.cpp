/***********************************************************************/
//                                                                          
//  INFINITUM                                                           
//  Rakesh Mahadasa                                                     
//  National Institute of Technology , Calicut                      
//  problem link : https://www.hackerearth.com/ACMICL/algorithm/icl-5-tiling-the-floor/
//  Concept : Logic
//  Reference : None
//                                                                      
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
    while(b){
        ll temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int l,b;
    cin>>l>>b;
    int sum=0;
    if(l%2==0 && b%2==0)
        {sum=(l/2)*(b/2);}
    else if(l%2!=0 && b%2!=0)
    {
        sum=((l+1)/2)*(((b+1)/2))-1;
    }
    else if(l%2!=0 && b%2==0)
    {
        sum=(b/2)*((l+1)/2);
    }
    else
    {
        sum=((b+1)/2)*(l/2);
    }
    cout<<sum<<endl;
    return 0;
}