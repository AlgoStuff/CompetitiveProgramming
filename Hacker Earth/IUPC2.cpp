#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
    	double k,n;
    	cin>>k>>n;
    	double mul = 1.0;
    	if (k>n) cout<<"1.000000"<<endl;
    	else{
    	for( long int i = n-k +1 ; i <= n ; i++){
    	mul *= double(i/n);

    	}
    	cout<<setprecision(2000) <<1-mul<<endl; 
    	}
    }
}

