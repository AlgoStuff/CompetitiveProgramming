#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int t;
	long long int pile[50];
	double val[50];
	int ni;
	int k;
	double result; 
	int pos;
	cin>>t;
	while(t--){
		
		cin>>k;
		result = 0.0;
		while(k--){

			cin>>ni;
			for(int i = 1 ; i <= ni ; i++){
				scanf("%lld",&pile[i]);
			}
			sort(pile+1,pile+ni+1);
			if(pile[1]%2)
			{val[1]=-1; result+=val[1];}
			else {val[1] = 1; result+=val[1];}
			pos = 1;
			for(int i = 2 ; i <= ni ; i++){
			if(pile[i]%2){
			if(pile[i-1]%2 && (val[i-1] == -1)){ val[i] = -1; pos = i; result+=val[i];}
 			else {val[i] = -1*pow(2,-1*(i-pos)); result+=val[i];}
			}
			else{
			if(!(pile[i-1]%2) && (val[i-1] == 1)){ val[i] = 1; pos = i; result+=val[i];}
 			else {val[i] = pow(2,-1*(i-pos)); result+=val[i];}
 			}}
		}
		if(result == 0) printf("DON'T PLAY\n");
		else if (result > 0) printf("EVEN\n");
		else printf("ODD\n");
		}
	return 0;
}
