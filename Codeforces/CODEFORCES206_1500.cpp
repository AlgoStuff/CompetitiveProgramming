#include<iostream>
#include<algorithm>
using namespace std;
int res(int ar[],int rp,int lp,bool rb,bool lb,int q1,int q2,int l,int r){
if(lp == rp) return min(ar[lp]*l+q1*lb,ar[rp]*r+q2*rb);
return min(ar[lp]*l+q1*lb+ res(ar,rp,lp+1,false,true,q1,q2,l,r),ar[rp]*r+q2*rb+res(ar,rp-1,lp,true,false,q1,q2,l,r
));

}
int main(){
	int n,l,r,q1,q2;
	cin>>n>>l>>r>>q1>>q2;
	int ar[n+1];
	for (int i =1; i <= n; i++){
		cin>>ar[i];
	}
	bool lb = false;
	bool rb = false;
	int rp = n;
	int lp = 1;
	cout<<res(ar,rp,lp,rb,lb,q1,q2,l,r)<<endl;
	return 0;
}

