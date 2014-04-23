#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<stack>
#include<cmath>
double distance(double x1,double y1,double x2 , double y2){

return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
} 

double area(double a,double b , double c){
double s = a+b+c;
s = s/2;
return sqrt(s*(s-a)*(s-b)*(s-c));


}

using namespace std;
int main(){
ifstream fin;
fin.open("circles.in");
ofstream fout;
fout.open("circles.out");
double x1,x2,x3,y1,y3,y2;
int t;
vector <double> radius;
int max = 1;

fin>>t;
while(t--){
fin>>x1;
fin>>y1;
fin>>x2;
fin>>y2;
fin>>x3;
fin>>y3;
double a = distance(x1,y1,x2,y2);
double b = distance(x3,y3,x2,y2);
double c = distance(x1,y1,x3,y3);
double A = area(a,b,c);
double R = a*b*c/A;
int temp = 1;
for (int i = 0 ; i < radius.size();i++){
if(R == radius[i]){temp++;}}
if(temp > max) max = temp;
radius.push_back(R);
}

fout<<max<<endl;
return 0;}
