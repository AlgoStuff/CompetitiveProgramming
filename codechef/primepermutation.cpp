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
int primes[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
string str;
int len;

int main(){
cin>>str;
len = str.length();

for(int i = 0;primes[i]<len;i++){for(int j = 0;j<=(len/primes[i]-1);j++){ if(str[primes[i]] = str[primes[i]*(j+1)]) {cout<<"YES"; break;}}}return 0;
}
