#include<iostream>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
double ab,bc,cd,da,bd,ac,s1,s2;

bool isSq(){
if(ab == bc && ab == cd && ab == da && bd == ac) return true;
return false;
}
bool isRh(){
if(ab == bc && ab == cd && ab == da && bd != ac) return true;
return false;
}
bool isRe(){
if(ab == cd && bc == da && bd == ac && ab*ab + da*da == sqrt(bd)) return true;
return false;
}
bool isPl(){
if(ab == cd && bc == da && bd != ac && ab*ab + da*da != sqrt(bd)) return true;
return false;
}
bool isNo(double x1,double x2,double x3,double x4,double y1,double y2,double y3,double y4){
if((y2-y1)*(x2-x3) == (y2-y3)*(x2-x1) ||  (y2-y1)*(x4-x1) == (y4-y1)*(x2-x1) ||  (y2-y1)*(x3-x1) == (y3-y1)*(x2-x1)  ||  (y2-y1)*(x2-x4) == (y2-y4)*(x2-x1)  ||  (y2-y3)*(x3-x4) == (y3-y4)*(x2-x3)  || 
(y2-y3)*(x3-x1) == (y3-y1)*(x2-x3) ||  (y2-y3)*(x2-x4) == (y2-y4)*(x2-x3) ||
(y3-y4)*(x4-x1) == (y4-y1)*(x3-x4) || (y3-y4)*(x3-x1) == (y3-y1)*(x3-x4)  || (y3-y4)*(x2-x4) == (y2-y4)*(x3-x4)  || (y4-y1)*(x3-x1) == (y3-y1)*(x4-x1)  || (y4-y1)*(x2-x4) == (y2-y4)*(x4-x1)) return true;
return false;
}
double dist(double x11, double y11 , double x12 , double y12){
double res = sqrt((x11-x12)*(x11-x12) + (y11-y12)*(y11-y12));
return res;
}
int main(){
double t,x1,x2,x3,x4,y1,y2,y3,y4;
cin>>t;
while(t--){
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
ab = dist(x1,y1,x2,y2);
bc = dist(x2,y2,x3,y3);
cd = dist(x4,y4,x3,y3);
da = dist(x4,y4,x1,y1);
ac = dist(x1,y1,x3,y3);
bd = dist(x2,y2,x4,y4);
if(isSq()) cout<<"SQUARE"<<endl;
else if(isRh()) cout<<"RHOMBUS"<<endl;
else if(isRe()) cout<<"RECTANGLE"<<endl;
else if (isPl()) cout<<"PARALLELOGRAM"<<endl;
else if(isNo(x1,x2,x3,x4,y1,y2,y3,y4)) cout<<"NONE"<<endl;
else cout<<"QUADRILATERAL"<<endl;
}
return 0;
}
