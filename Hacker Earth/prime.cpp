#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <map>

using namespace std;

#define SIEVEBITS 17
#define SIEVESIZE (1<<SIEVEBITS)
#define y putchar
typedef long long int ll;
uint8_t sieve[SIEVESIZE];
inline void out(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0) n *= -1;
	if(n == 0)
	{
		y('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) y(ch[ind]);
	y('\n');
}

long long int rev(long long int num){
long long int reve = 0,rem=0;
while(num!=0) 
{ 
rem=num%10; 
num=num/10; 
reve=reve*10+rem; 
}
return reve; 
}
bool prr[100000000]={0};
int main() {

  long long int low;
 long long int high;
 
	low = 10,high = 110;
  uint64_t rp, sum = 0,nump =0;

 
  vector<int> oddprimes;
  for (int p = 3; p < 31622; p += 2) {
    bool prime = true;
    for (int i = 3; i * i <= p; i += 2) {
      if (p % i == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      oddprimes.push_back(p);
      if (low <= p && p <= high) {
rp = rev(p);
       if( p != rp){if(prr[rp] == 1) out(p);
        else{prr[p] = 1; }}
      }
    }
  }
  if (low < 31622) low = 31622;                                                              
  for (int base = low / 2; base <= high / 2; base += SIEVESIZE) {
    memset(sieve, 0, SIEVESIZE);
    for (vector<int>::const_iterator i = oddprimes.begin(); i != oddprimes.end(); ++i) {
      int p = *i;
      int offset = (2 * base + 1) % p;
      if (offset != 0) {
        if (offset & 1) {
          offset = (p - offset) >> 1;
        } else {
          offset = p - (offset >> 1);
        }
      }
      for (int j = offset; j < SIEVESIZE; j += p) sieve[j] = 1;
    }
    for (int i = 0; i < SIEVESIZE; i++) {
      int p = 2 * (base + i) + 1;
      if (!sieve[i] && p <= high){ 
				rp = rev(p);
                if( p != rp){if(prr[rp] == 1)out(p);
        else{prr[p] = 1; }}
      }
      
      }
    }
    ll add = 1000000;
    ll past = 0;
	while(1){
    low = 100000000+past,high= add+low;
	ll pps[1000000]={0};
	int size = 0;
 	 vector<int> oddprimes2;
 	 oddprimes2.clear();
  for (int p = 3; p < 31622; p += 2) {
    bool prime = true;
    for (int i = 3; i * i <= p; i += 2) {
      if (p % i == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      oddprimes2.push_back(p);
      if (low <= p && p <= high) {
rp = rev(p);
       if( p != rp){if(binary_search(pps,pps+size,rp)) out(p);
        else{pps[size] = p;size++; }}
      }
    }
  }
  if (low < 31622) low = 31622;                                                              
  for (int base = low / 2; base <= high / 2; base += SIEVESIZE) {
    memset(sieve, 0, SIEVESIZE);
    for (vector<int>::const_iterator i = oddprimes2.begin(); i != oddprimes2.end(); ++i) {
      int p = *i;
      int offset = (2 * base + 1) % p;
      if (offset != 0) {
        if (offset & 1) {
          offset = (p - offset) >> 1;
        } else {
          offset = p - (offset >> 1);
        }
      }
      for (int j = offset; j < SIEVESIZE; j += p) sieve[j] = 1;
    }
    for (int i = 0; i < SIEVESIZE; i++) {
      int p = 2 * (base + i) + 1;
      if (!sieve[i] && p <= high){ 
				rp = rev(p);
                if( p != rp){if(binary_search(pps,pps+size,rp)) out(p);
        else{pps[size] = p;size++; }}
      }
      
      }
    }
    past = add;
    add=add+1000000;
    if(add == 3000000) break;
    }

}
