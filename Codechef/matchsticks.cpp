#include <cstdio>
#include<iostream>
#include<iomanip>
using namespace std;

struct Tree { long long int minv,maxv, sum, lval, rval; };
long long int a[1000000];
Tree T[1000000];

inline long long int max2(long long int a, long long int b) {
	return ((a > b)? a : b);
}
inline long long int fmax2(long long int a,long long int b) {
	return ((a > b)? a : b);
}
inline long long int max3(long long int a, long long int b, long long int c) {
	return max2(a, max2(b, c));
}
inline long long int min2(long long int a, long long int b) {
	return ((a < b)? a : b);
}

inline long long int min3(long long int a, long long int b, long long int c) {
	return min2(a, min2(b, c));
}
inline void init(long long int Node, long long int i, long long int j) {
	if(i==j) {
		T[Node].maxv = T[Node].sum = T[Node].rval = T[Node].lval = a[i];
		T[Node].minv = T[Node].sum = T[Node].rval = T[Node].lval = a[i];
		return;
	}
	long long int m = (i+j)/2;
	init(2*Node, i, m);
	init(2*Node+1, m+1, j);
	T[Node].sum = T[Node*2].sum + T[Node*2+1].sum;
	T[Node].maxv = max2(T[2*Node].maxv, T[2*Node+1].maxv);
	T[Node].minv = min3(T[2*Node].minv, T[2*Node].rval + T[2*Node+1].lval, T[2*Node+1].minv);	
	T[Node].lval = max2(T[2*Node].lval, T[2*Node].sum + T[2*Node+1].lval);
	T[Node].rval = max2(T[2*Node].rval + T[2*Node+1].sum, T[2*Node+1].rval);
}



inline void find(Tree &res, long long int Node, long long int L, long long int R, long long int i, long long int j) {
	if(L==i && R==j) {
		res = T[Node];
		return;
	}
	long long int m = (L + R)/2;
	if(j<=m) find(res, 2*Node, L, m, i, j);
	else if(i>m) find(res, 2*Node+1, m+1, R, i, j);
	else {
		Tree Left, Right;
		find(Left, 2*Node, L, m, i, m);
		find(Right, 2*Node+1, m+1, R, m+1, j);
		res.maxv = max2(Left.maxv, Right.maxv);
		res.minv = min3(Left.minv, Right.minv, Left.rval + Right.lval);		
		res.sum = Left.sum + Right.sum;
		res.lval = max2(Left.lval, Left.sum + Right.lval);
		res.rval = max2(Left.rval + Right.sum, Right.rval);
	}
}

int main() {
	long long int n, i, j, m, t;
	Tree res;
	scanf("%lld", &n);
	for(i=0; i<n; i++) scanf("%lld", &a[i]);
	init(1, 0, n-1);
	scanf("%lld", &m);
	while(m--) {
		scanf("%lld%lld", &i, &j);
		if( i > 0 && j < n-1){
			find(res, 1, 0, n-1, i, j);
			long long int inmax = res.maxv;
			long long int inmin = res.minv;
			find(res, 1, 0, n-1, 0, i-1);
			long long int lmax = res.maxv;
			find(res, 1, 0, n-1, j+1, n-1);
			long long int rmax = res.maxv;
			long long int outmax = max2(lmax,rmax);
			if(outmax>(inmax-inmin)/2 || ((inmax)-(inmin))%2 == 0 )			
			cout<<(inmin+fmax2((outmax),((inmax-inmin)/2)))<<".0"<<endl;
			else 
			cout<<(inmin+fmax2((outmax),((inmax-inmin)/2)))<<".5"<<endl;			
			
		}
		else if (i > 0){
		find(res, 1, 0, n-1, 0, i-1);		
		long long int ollmax = res.maxv;
                find(res, 1, 0, n-1, i, j);
		long long int olinmax = res.maxv;
		long long int olinmin = res.minv;	
		if(ollmax>(olinmax-olinmin)/2 || ((olinmax)-(olinmin))%2 == 0 )						
		cout<<olinmin+fmax2(ollmax,(olinmax-olinmin)/2)<<".0"<<endl;		
		else
		cout<<olinmin+fmax2(ollmax,(olinmax-olinmin)/2)<<".5"<<endl;				
		} 
		else if( j < n-1){
		
		find(res, 1, 0, n-1, j+1, n-1);		
		long long int orrmax = res.maxv;
                find(res, 1, 0, n-1, i, j);
		long long int orinmax = res.maxv;
		long long int orinmin = res.minv;	

	if(orrmax>(orinmax-orinmin)/2 || ((orinmax)-(orinmin))%2==0)								
		cout<<orinmin+fmax2(orrmax,(orinmax-orinmin)/2)<<".0"<<endl;	
		else
		cout<<orinmin+fmax2(orrmax,(orinmax-orinmin)/2)<<".5"<<endl;	
		
		}
		else{
		find(res, 1, 0, n-1,i,j);
		long long int ninmin = res.minv;
		long long int ninmax = res.maxv;
		if(((ninmax)-(ninmin))%2 == 0)
		cout<<ninmin+((ninmax-ninmin)/2)<<".0"<<endl;
		else				
		cout<<ninmin+((ninmax-ninmin)/2)<<".5"<<endl;
		
		}

	}
	return 0;
}


