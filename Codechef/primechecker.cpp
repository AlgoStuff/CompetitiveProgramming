#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long int num;
 int inc = 1;

while(1){

int i=2;

num = (inc + 1234567890) % pow(2,31);

while(i<num)
{
if(num%i==0)
{
cout <<'0';
break;
}
i++;
}
if(i==num)
cout <<'1';

inc++;}
return 0;
}
