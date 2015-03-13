#include<iostream>
#include<cmath>
using namespace std;
int main(){
unsigned long int n;

cout<<"enter any  number greater than one : ";
cin>>n;

unsigned long int  a[n];

for (unsigned long int i = 2; i <=n ; i++)
  {
      a[i] = 1;
}

for(unsigned long int  i = 2; i <= sqrt(n);i++)
       { if ( a[i] ){ unsigned long int  k = 0;
                       while(((i*i) +(k*i)) <=n ){

                                        a[((i*i) +(k*i))] = 0;
                                          k++;}}}
cout<<"The prime numbers till " <<n <<" are : ";
unsigned long int  check = 2;
unsigned long int  count = 0;
while(check <= n ){ if (a[check]) {count++;} check++;}
cout<<count<<endl;
return 0;
}

