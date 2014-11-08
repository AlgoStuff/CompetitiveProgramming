/***********************************************************************/
//                                                                          
//  INFINITUM                                                           
//  Rakesh Mahadasa                                                     
//  National Institute of Technology , Calicut                      
//  problem link : http://www.hackerearth.com/codesense/algorithm/chintu-and-candies/
//  Concept : Euler Totient
//  Reference : http://discuss.codechef.com/questions/18250/eulers-totient-function
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;



int phi (int n) {
    int result = n;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
        result -= result / n;
    return result;
}


int main(){
    int t;
    scanf("%d",&t);
    int coprimes[10001]={0};
    for(int i = 1; i <=10000;i++){
        coprimes[i]=phi(i);
    }
    while(t--){
        int h,l,k;
        cin>>h>>l>>k;
        int res = -1;
        for(int i = l;i<=h;i++){
            if (coprimes[i]==k){
                res = i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
