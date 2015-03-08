/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/codemyca/algorithm/little-stuart-and-his-teacher-20/
//	Reference :	http://discuss.codechef.com/questions/18250/eulers-totient-function
//	Concept : Relative primes , Maths
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
	
	long long int a[1000001]={0};

	for(int i = 1;i<=1000000;i++){
		a[i] = a[i-1]+phi(i);
	}
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",n*(n-1)/2+1-a[n]);

	}
	return 0;
}
