#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int marbles[1000000];
long long int tree[2000001];
 
void build(long int n , long int l ,  long int r){
if ( l > r ) return;
if(l == r){ tree[n] = marbles[l]; return;}
 
build(2*n , l , (l+r)/2 );
build(2*n+1 , (l+r)/2 + 1 , r);
 
tree[n] = tree[2*n] + tree[2*n+1];
//cout<<n<<"=>"<<tree[n]<<endl;
} 
 
void update_sum(long int n ,long  int a ,long  int b, long int i ,long  int j,int value){
 
if( a > b || a > j || b < i) return;
if ( a == b ) { tree[n] = tree[n]+value; return;}
 
update_sum( 2*n, a , (a+b)/2 , i , j, value);
update_sum( 2*n+1, (a+b)/2 + 1 , b , i , j , value);
 
tree[n] = tree[2*n] + tree[2*n + 1];
 
}
 
void update_minus(long int n ,long  int a ,long  int b, long int i ,long  int j , int value){
if( a> b || a > j || b < i) return;
if ( a == b ) { tree[n] = tree[n]-value ; return;}
 
update_minus( 2*n, a , (a+b)/2 , i , j ,value);
update_minus( 2*n+1, (a+b)/2 + 1 , b ,i , j,value);
 
tree[n] = tree[2*n] + tree[2*n + 1];
 
}
 
long int query(long int n , long int a ,long int b ,long int i ,long int j){
if(a > b || a > j || b < i) return 0;
if((a >= i && b <= j)) return tree[n];
long int q1 = query( 2*n , a ,(a+b)/2 ,  i ,  j);  
long int q2 = query( 2*n+1 , (a+b)/2 + 1,b,i , j);
return (q1+q2);
}
 
 
 
int main(){
long int n,q,l,r,ms;
char qu;
cin>>n>>q;
for(int i = 0 ; i < n ; i++) cin>>marbles[i];
build(1,0,n-1);
while(q--){
cin>>qu;
if(qu == 'S'){
cin>>l>>r;
cout<<query(1,0,n-1,l,r)<<endl;
}
if(qu == 'T'){
cin>>l>>ms;
update_minus(1,0,n-1,l,l,ms); 
}
if(qu == 'G'){
cin>>l>>ms;
update_sum(1,0,n-1,l,l,ms);
}
}
return 0;
}  
