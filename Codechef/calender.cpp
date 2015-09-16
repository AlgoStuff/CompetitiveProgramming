#include<cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	unsigned long long int t,c=0;
	string date;
	cin>>t;
	while(c<t){
		cout<<"case "<<c+1<<": ";
	cin>>date;
	string day = date[0]+date[1];
	string month = date[3]+date[4]+date[5];
	string year = date[7]+date[8]+date[9]+date[10];
	int d,y,m;
	d = stoi(day);
	y = stoi(year);
	switch(month){
		case "JAN":
			cout<<d<<" "<<"Hundreds"<<endl;
		case "FEB":
			if(y%4)
			cout<<d+31<<" "<<"Hundreds"<<endl;	
			else cout<<d+31<<" "<<"Hundreds"<<endl;
		case "MAR":
			cout<<" "<<"Hundreds"<<endl;
		
			
	}
	}
}
