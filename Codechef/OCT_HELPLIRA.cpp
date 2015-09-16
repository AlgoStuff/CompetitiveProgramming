#include<vector>
#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
#include<cstdio>
#include<iomanip>
#include<map>
#include<algorithm>
#include<list>
#include<cmath>
using namespace std;

float area(float a,float b,float c){
float s = (a+b+c)/2;
return(pow(s*(s-a)*(s-b)*(s-c),.5));
}
float dist(float x1,float y1,float x2,float y2){
return(pow(pow(x1-x2,2) + pow(y1-y2,2),.5));
}

int main(){
float x1,x2,y1,y2,x3,y3;
int t;
cin>>t;
float areas[t+1];
float max = 0;
float min = 100000;
int imax,imin;
int co = 1;
while(co<=t){
cin>>x1>>y1>>x2>>y2>>x3>>y3;
float a = dist(x1,y1,x2,y2);
float b = dist(x3,y3,x2,y2);
float c = dist(x1,y1,x3,y3);
areas[co] = area(a,b,c);
co++;
}
for(int i = 1;i<= t ; i++){
if(areas[i] >= max) {imax = i; max = areas[i]; }
if(areas[i] <= min) {imin = i; min = areas[i]; }
}
cout<<imin<<" "<<imax<<endl;
return 0;
}
