/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	
//																		
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;




int main(){
	string s;
	cin>>s;
	int no_1 = 0;
	int no_0 = 0;
	while (s!=""){
		string temp = "";
		int len = s.length();
		int num = s[len-1]-'0';
		int carry = num%2;
		if(carry) no_1++;
		else no_0++;
		carry = 0;
		bool num_start = false;
		for(int i = 0;i < len;i++){
		num = s[i]-'0';
		num+=carry;
		carry = num%2;
		carry = carry*10;
		char temp_num = '0'+num/2;
		if(temp_num != '0') num_start = true;
		if(num_start)
		temp+=temp_num;
		}
		cout<<temp<<endl;
		s = temp;

	}
	cout<<"No of Set Bits : "<<no_1<<endl;
	cout<<"No of Unset Bits : "<<no_0<<endl;
	return 0;
}
