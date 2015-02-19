/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/deja-vu/algorithm/adarsh-and-smallest-number/
//	Concept : LCM
//	Reference :	https://www.quora.com/Find-the-least-number-that-is-divisible-by-all-numbers-between-1-and-10
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


bool primes[500001];

void seive(){
	memset(primes,true,sizeof(primes));
	for(int i = 2; i <= 708;i++){
		for(int j = i*i; j <= 500000;j=j+i){
			primes[j] = false;
		}
	}
}
int primes1000[] = {
	2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67,
	71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 
	173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271,
	277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 
	397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 
	509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 
	641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 
	761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863,877, 881, 883,
	887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997
};
int main(){
	seive();
	long long int sumhash[500001];
	sumhash[1]=1;
	int factorhash[1000]={0};
	for(int i = 2; i <=500000;i++){
		if(primes[i]){
			sumhash[i]=(sumhash[i-1]*i)%MOD7;
			if(i<1000)
			factorhash[i]+=1;
		}
		else{
			long long int mid_res2 = -1;
			for(int j = 0; j < 168;j++){
				if(i%primes1000[j] == 0){
					int temp = i;
					int mid_res = 0;
					while(true){
						if(temp%primes1000[j] == 0){
							mid_res++;
							temp = temp/primes1000[j];
							
						}
						else {break;}
					}
					if(factorhash[primes1000[j]] < mid_res){
						mid_res2 = (sumhash[i-1]*pow(primes1000[j],mid_res-factorhash[primes1000[j]]));
						mid_res2 = mid_res2%MOD7;
						factorhash[primes1000[j]] = mid_res;
					}					
					
				}
				else if(primes1000[j]>i) break;

			}
			if(mid_res2==-1) sumhash[i]=sumhash[i-1];
			else sumhash[i] = mid_res2;
		}
	}
	int t;
	
	scanf("%d",&t);

	while(t--){
		int n;
		cin>>n;
		cout<<sumhash[n]<<endl;
	}
	return 0;
}
