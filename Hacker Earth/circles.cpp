/**********************************************************************/
//  																   /	
//	INFINITUM 					                                       /
//	Rakesh Mahadasa													   /
//	National Institute of Technology , Calicut						   /
//																	   /
/**********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<ctime>
#include<map>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD 0
#define x getchar()
#define y putchar
 
using namespace std;

// Fast input
inline void read(ll & n)
{
	n = 0;
	char ch = x; int sign = 1;
	while(ch < '0' || ch > '9'){if(ch == '-') sign = -1; ch = x; }
	while(ch >= '0' && ch<= '9')
	{
		n = n*10 + ch - '0';
		ch = x;
	}
	n *= sign;
}
// Fast output
inline void out(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0) n *= -1;
	if(n == 0)
	{
		y('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) y(ch[ind]);
	y('\n');
}

bool compare( pair <int , int > a, pair <int , int>b){
if(a.first > b.first) return false;
if(a.first == b.first) return a.second < b.second;
else return true;
}
double dist(pair <int , int> a, pair <int , int> b){
return sqrt(pow(a.first-b.first,2)+pow(a.second-b.second,2));
}
int main(){
int n;
cin>>n;
vector < pair < int,int> > points(10001);
int maxx = 0,maxy = 0,minx = 0,miny = 0;
for(int i = 0; i < n;i++){
cin>>points[i].first>>points[i].second;

if(points[maxx].first < points[i].first) maxx = i;
if(points[maxy].second < points[i].second) maxy = i;
if(points[minx].first > points[i].first) minx = i;
if(points[miny].second > points[i].second) miny = i;
}

if(n<1000){
if(n==1){
cout<<1<<endl;
cout<<points[0].first<<" "<<points[0].second<<" "<<1<<endl;
}
else{
double max = 0;
int cx,cy,dx,dy;
for (int i = 0; i < n-1; i++){
for(int j = i+1; j < n;j++){
if(dist(points[i],points[j]) > max ) {max = dist(points[i],points[j]); cx = points[i].first;cy=points[i].second;dx = points[j].first;dy=points[j].second;}
}
}
if(int(max+1) < 71){
cout<<1<<endl;
cout<<(cx+dx)/2<<" "<<(cy+dy)/2<<" "<<int(max+1)/2+1<<endl;
}
else{
cout<<1<<endl;
cout<<50<<" "<<50<<" "<<71<<endl;
}
}
return 0;
}
cout<<1<<endl;
cout<<50<<" "<<50<<" "<<71<<endl;




return 0;
}
