/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/tcetcyphers-2/algorithm/vaishnav-and-pizzas/
//	Concept : simple math
//	Reference :	e-maxx
//																		
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;


bool primes[10001];
void prime_gen(){
	memset(primes,true,sizeof(primes));
	for(int i = 2; i <= 100;i++){
		if(primes[i]){
			for(int j = i*i;j<=10000;j=j+i){
				primes[j] = false;
				
			}
		}
	}
}

int gcd(int a,int b){
	while(b!=0){
		int temp = b;
		b = a%b;
		a = temp;
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
	int count[10001] = {0};
	prime_gen();
	for(int i = 2; i <= 5000; i++){
		int count_ind = 0;
		if(primes[i]) count_ind = i-1;
		else{
			count_ind = phi(i);
			}
		count[i] = count[i-1]+count_ind;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		cout<<count[n]<<endl;
	}
	return 0;
}
