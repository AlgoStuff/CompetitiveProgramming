#include<iostream>
using namespace std;
unsigned long int  fib(unsigned long long int);
int main(){
unsigned long int a[100];
unsigned long long int p=0;
for(int i = 1; i < 40;i++){

a[i] = fib(i);}

for(int i = 1; a[i] < 4000000;i++){

if(a[i]%2==0)p=p+a[i];}
cout<<p<<" ";
return 0;
}

unsigned long int fib(unsigned long long int a)
{ 
  unsigned long long  int i = 1, prev=0 ,curr=1,next;
    if ( a == 0 || a == 1){ return 0;}
    else{
           while (i < a)
                      { 
                             next = prev + curr;
                             prev = curr;
                             curr = next;
                             i++;
                       }
return curr;
    }}
