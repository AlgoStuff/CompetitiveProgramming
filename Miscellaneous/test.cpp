#include<iostream>
#include<string.h>
#include<cstdlib>
#include <sstream>
#include<iomanip>
#include<cstdio>
//works only for int , ca be used to truncate float to int.
#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
( std::ostringstream() << std::dec << x ) ).str()


//convert float to string

/*float f;
cin>>f;
ostringstream buffer;
buffer << f;
string str = buffer.str();
*/



// st is input string

//string to int

/*
int result;
stringstream(st) >> result;
*/

//rounding of values
/*
printf("%0.2f\n",h); -> preferred
cout<<setprecision(2)<<h<<endl;
*/
using namespace std;





int main(){
string s;
int t;
cin>>t;
while(t--){
float h;
cin>>h;


}
return 0;
}
