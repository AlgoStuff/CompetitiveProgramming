#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>

#include<cmath>
using namespace std;
typedef long long int ll;

int main(){
ll sum=0;
for(int i = 1;i <10;i++){ if(i%3==0 || i%5 ==0) sum=sum+i;  }
cout<<sum<<endl;
return 0;
}
