#include<iostream>
using namespace std;
int zeta(int n) {
	int ret = 0;
	for (int p = 5; p <= n; p*=5)
		ret += n/p;
	return ret;
}

int main(){
int t,n;
cin>>t;
while(t--){
cin>>n;
cout<<zeta(n)<<endl;
}


}
