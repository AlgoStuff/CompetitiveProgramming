#include<iostream>
#include<string.h>
using namespace std;
typedef unsigned long long int ull;
void swap(char  *ptr1, char *ptr2)

{
  char  temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 =temp;
}
int main()
{
int t,c=0;
cin>>t;
while( c < t)
{
string a;
for (ull i = 0; a[i] != '\0' ; i ++){
cin>>a;}
char small; int p,check = 0;
for (ull i = 0; a[i] != '\0' ; i ++){
         check = 0;
         small = a[i];
               for(ull j = i; j < t; j ++){

             if(small > a[j]){// p = j;
                               small = a[j];
                               p = j;
              check = 1; }}
     if(check){      swap(&a[i],&a[p]);
}} 

for (ull i = 0; a[i] != '\0' ; i ++){ cout<<a[i];}
c++;
}

return 0;
}

