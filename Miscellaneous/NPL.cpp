#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
 char op1,op2,op3;
long int c2(long int x,long int y,char op3){
if (op3 == '+')
		return (x+y);
	else
		return (x*y);
} 
long int check(long int n1,long int n2, long int n3,char op2,char op3){
if (op2 == '+')
		return min(c2(n1+n2,n3,op3),min(c2(n1,n2+n3,op3),c2(n1+n3,n2,op3)));
	else	
		return min(c2(n1*n2,n3,op3),min(c2(n1,n2*n3,op3),c2(n1*n3,n2,op3)));

}
 int main(){
 long int t;
 cin>>t;
 while(t--){
 long int a,b,c,d;
 cin>>a>>b>>c>>d;
 cin>>op1>>op2>>op3;
 long int p[7];
 p[0] = -100;
 if(op1 == '+'){
 		p[1] = check(a+b,c,d,op2,op3);
 		p[2] = check(a,b+c,d,op2,op3);
		p[3] = check(a,b,c+d,op2,op3);
		p[4] = check(b,c,a+d,op2,op3);
		p[5] = check(a+c,b,d,op2,op3);
		p[6] = check(a,c,b+d,op2,op3);
	}
 else{
 		p[1] = check(a*b,c,d,op2,op3);
		p[2] = check(a,b*c,d,op2,op3);
		p[3] = check(a,b,c*d,op2,op3);
		p[4] = check(b,c,a*d,op2,op3);
		p[5] = check(a*c,b,d,op2,op3);
		p[6] = check(a,c,b*d,op2,op3);
 
 }	
 sort(p,p+7);
 cout<<p[1]<<endl;
 }
 return 0;
 }
