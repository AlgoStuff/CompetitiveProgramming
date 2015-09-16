#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>

#include<cmath>
using namespace std;
typedef long long int ll;

int main(){
ll z = 2,large =2,n=600851475143;
while(z*z < n){
 if(n%z==0){ cout<<z<<" ";n=n/z;}
 else z++;

}
cout<<n<<endl;

return 0;}
