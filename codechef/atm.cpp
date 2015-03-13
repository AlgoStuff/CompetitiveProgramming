#include<iostream>
using namespace std;
int main()
{
float bal;
int wd;
cin>>wd;
cin>>bal;

if((wd % 5 == 0) && ((wd + .5) < bal))
   cout<<(bal - wd - .5 );
else
   cout<<bal;
return 0;
}
