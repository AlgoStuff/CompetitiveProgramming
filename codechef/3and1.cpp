#include<iostream>
#include<fstream>

using namespace std;
typedef long int l;

int main(){
l t,n,i,j;
l a[300] = {1,3,11,13,31,33,111,113,131,133,311,313,331,333,1111,1113,1131,1133,1311,1313,1331,1333,3111,3113,3131,3133,3311,3313,3331,3333,11111,11113,11131,11133,11311,11313,11331,11333,13111,13113,13131,13133,13311,13313,13331,13333,31111,31113,31131,31133,31311,31313,31331,31333,33111,33113,33131,33133,33311,33313,33331,33333,111111,111113,111131,111133,111311,111313,111331,111333,113111,113113,113131,113133,113311,113313,113331,113333,131111,131113,131131,131133,131311,131313,131331,131333,133111,133113,133131,133133,133311,133313,133331,133333,311111,311113,311131,311133,311311,311313,311331,311333,313111,313113,313131,313133,313311,313313,313331,313333,331111,331113,331131,331133,331311,331313,331331,331333,333111,333113,333131,333133,333311,333313,333331,333333};
cin>>t;
while(t--)
{

cin>>n;
for(int i = 1; i <=254 ; i++){
if(a[i] == n){ cout<<a[i]<<endl; break;}
else if(a[i] > n) {cout<<a[i-1]<<endl; break;}}


}}