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

ll ans=0;

void divisors(ll n){
int counter,i;
for(counter=0,i=1;(!(i==n) && !(n%i) && (counter++)) || i<=(n/2);i++);
    ++counter;
    ans = ans+counter;
}
int main()
{
int a,b,c;

cin>>a;
cin>>b;
cin>>c;
for(int i = 1; i <= a;i++){for(int j = 1 ; j <=b; j++){for(int k = 1; k <=c;k++){ divisors(i*j*k);
}}}

cout<<ans% 1073741824<<endl;
return 0;
}
