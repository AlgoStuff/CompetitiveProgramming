#include <cstdio>
#include<iostream>
#include<vector>
 
using namespace std;
 
#define LSOne(S) (S & (-S))
 
class BIT {
 
        long long int * ft, size;
 
public:
        BIT(long long int  n) {
                size = n;
                ft = new long long int [n+1];
        }
 
        ~BIT()  {
                delete [] ft;
        }
 
        long long int  sum(long long int  b) {
                long long int  sum = 0;
                for (; b; b -= LSOne(b)) sum += ft[b];
                return sum;
        }
 
        long long int  sum(long long int  a, long long int  b) {
                return sum(b) - (a == 1 ? 0 : sum(a - 1));
        }
 
        void update(long long int  k, long long int  v) {
                for (; k <= size; k += LSOne(k)) ft[k] += v;
        }
 
    
};
 
int  main()  {
    BIT b(1000000);
    long int n,q,ms,l,r;
    char qu;
    cin>>n>>q;
    for(int i = 1 ; i <= n ; i++) {cin>>ms;
b.update(i,ms);
}
 
 while(q--){
 cin>>qu;
 if(qu == 'S'){
cin>>l>>r;
cout<<b.sum(l+1,r+1)<<endl;
}
if(qu == 'T'){
cin>>l>>ms;
b.update(l+1,ms*-1); 
}
if(qu == 'G'){
cin>>l>>ms;
b.update(l+1,ms); 
}
 
 }
 
    return 0;
} 
