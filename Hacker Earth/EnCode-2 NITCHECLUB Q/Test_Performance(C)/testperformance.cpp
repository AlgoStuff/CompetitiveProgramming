#include <iostream>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int a,x,temp;
	cin>>a;
	int ans=0;
	for (int i = 1; i < n; i += 1)
	{
		cin>>x;
		if(x<=a){
			temp = (a-x+d-1)/d+((a-x)%d==0? 1 : 0);
			ans = ans + temp;
			x = x + d * temp;
		}			
		a = x;
	}
	printf("%d",ans);	
	return 0;
}
