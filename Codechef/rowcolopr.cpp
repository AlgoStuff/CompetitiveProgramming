#include<iostream>
#include<string.h>
#include<cstdlib>
typedef long long int ll;
using namespace std;

int main()
{
ll n,q,c=0;
cin>>n;
cin>>q;
ll *mat[314159];
mat[314159] = (ll *)malloc( 314159 *sizeof(ll));
for(ll i = 0 ; i < n; i++){for( ll j = 0 ; j < n; j++){mat[i][j] = 0;}}
while( c < q){
char query[5];
for(int i = 0 ;i < 6;i++){ cin>>query[i];}
if(query[0] == 'R'){ ll add,row; cin>>row;
cin>>add;
for(ll i = 0; i < n;i++) { mat[row][i] = mat[row][i]+ add;}
 }
else {  ll addc,col; cin>>col;
cin>>addc;
for(ll i = 0; i < n;i++) { mat[i][col] = mat[i][col]+ addc;}}
c++;
}
ll large = 0;
for(ll i = 0 ; i < n; i++){for( ll j = 0 ; j < n; j++){ if(mat[i][j] > large ) large = mat[i][j];}}
cout<<large<<endl;
return 0;

}
