/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.codechef.com/SEPT15/problems/CODECRCK
//	Concept : Maths
//	Reference :	None
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

typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

lli gcd(lli a,lli b){
	while(b){
		lli temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}




int main(){
	lli i,k,s;
	cin>>i>>k>>s;
	double q,x,y,a,b;
	cin>>a>>b;
	double den = 0;
	if(s<0) den = 0.5;
	else den = 2;
	x = sqrt(2);
	y = sqrt(3);
	double res;
	if(i > k){

		if((i%2==0&&k%2!=0) || (i%2!=0 && k%2==0)){
			double pa = a;
			double pb = b;
			a = x*(pa+pb)-x*y*(pa-pb);
			b = x*(pa-pb)+x*y*(pa+pb);
			i+=1;
		}
		
		int mul = 4*((i-k)/2);
		/*
		if(s<0) mul = mul - s;

		if(mul<0)
			res = ((a+b)*pow(2,-1*mul));
		else
			res = ((a+b)/pow(2,mul));
			
		if(s<0){
			mul = mul - s;
			res = a+b;
			if(mul<0)
				den = 0.5;
			else
				den = 2;
			for(int i = 0; i < abs(mul);i++){
				res=res/den;
				if(den==2&&res < 0.001)break;
			}
		}
		*/
		
			mul = mul+s;
			if(mul<0)
				den = 0.5;
			else
				den = 2;
			res = (a+b);
			for(int i = 0; i < abs(mul);i++){
				res=res/den;
				if(den==2&&res < 0.001)break;
			}
		
		printf("%lf\n",res);
	}
	else if (i < k){
		if((i%2==0&&k%2!=0) || (i%2!=0 && k%2==0)){
			double pa = a;
			double pb = b;
			a = x*(pa+pb)-x*y*(pa-pb);
			b = x*(pa-pb)+x*y*(pa+pb);
			i+=1;
		}
		
		int mul = 4*((k-i)/2);
		/*
		if(s>0){
			mul = mul - s;
			res = a+b;
			if(mul<0)
				den = 2;
			else
				den = 0.5;
			for(int i = 0; i < abs(mul);i++){
				res=res/den;
				if(den==2&&res < 0.001)break;
			}
		}
		else{ */
			mul = mul-s;
			res = (a+b);
			if(mul<0)
				den = 2;
			else
				den = 0.5;
			for(int i = 0; i < abs(mul);i++){
				res=res/den;
				if(den==2&&res < 0.01)break;
			}
		
		printf("%lf\n",res);
	}
	else{
		res = (a+b);
		for(int i = 0; i < abs(s);i++){
			res=res/den;
			if(den==2&&res < 0.01)break;
		}
		printf("%lf\n",res);
	}
	/* for(int i = 1; i < 10;i++){
		double pa,pb;
		pa = a;
		pb = b;
		a = x*(pa+pb)-x*y*(pa-pb);
		b = x*(pa-pb)+x*y*(pa+pb);
		printf("%lf %lf\n",a,b);
	}
*/

	return 0;
}
