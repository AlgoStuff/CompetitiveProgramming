//my header files
#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long int ll;

int main()
{
char translate[51];
string input;
char conversation[10000];
ll t,p,c=0;
cin>>t;

input = "yhesocvxduiglbkrztnwjpfman";
ofstream fout;
fout.open("gcj.txt");
while(c<t){
        cin>>p;
gets(conversation);
ll l =strlen(conversation);
fout<<"Case #"<<c+1<<": ";
for(ll i = 0; i < l;i++){
if(conversation[i]>=97 && conversation[i]<=122)
{int p = conversation[i] - 97; 
fout<<input[p];}
else if(conversation[i]>=65 && conversation[i]<=90)
{int q = conversation[i] - 65; 
char o = toupper(input[q]);
fout<<o;}

else if (conversation[i] == '_') cout<<" ";
else fout<<conversation[i];
}
fout<<endl;
c++;
}
return 0;
}
