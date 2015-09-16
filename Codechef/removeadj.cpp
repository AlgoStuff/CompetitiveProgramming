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
int l;
int counts=0;
bool d = true;
string str;
void removes(int pos){
for(int i = pos; i<l-1; i++){
str[i]=str[i+1];
}
l--;
counts++;
d = true;
}
int main()
{
cin>>l;
cin>>str;
while(d){
d = false;
for(int i = 0 ; i < l-1 ; i++){
if(str[i]==str[i+1]){removes(i);}
}}
cout<<counts<<endl;
return 0;
}
