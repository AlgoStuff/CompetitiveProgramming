#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;
string pal="0";
void ispalindrome( ll pro){
stringstream ss;  
ss<<pro;
string s1(ss.str());
string s2 = s1;
reverse(s1.begin(),s1.end());
if(s1==s2 && s1>pal) cout<<pal<<" ";pal = s1;
}
int main(){
for(int i = 100; i <1000;i++)
{for(int j = 100; j <1000;j++)
{  ll pro = i*j; 
 ispalindrome(pro);}}
 cout<<pal;
return 0;}
