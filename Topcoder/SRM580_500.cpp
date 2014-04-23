#include<iostream>
#include<vector>
using namespace std;
class  EelAndRabbit{
	public:
		int getmax(vector <int> l, vector <int> t){
		int end[100];
		for (int i = 0; i < l.size();i++) end[i] = l[i]+t[i];
		int num[100];
		for(int i = 0; i < l.size() ;i++){
		int count = 0;
		for(int j = 0 ;j < l.size() ; j++){
		if(t[j] <= t[i] && end[i] <= end[j])count++; 
		}
		num[i] = count;
		}
		int pos = 0,max1=0,max2=0;
		for (int i = 0; i < l.size();i++){if(max1 < num[i]) {max1 = num[i]; pos = i;} }
		for (int i = 0; i < l.size();i++){if(l[i] == l[pos]) num[i] = 0;}
		for (int i = 0; i < l.size();i++){if(max2 < num[i]) {max2 = num[i];}}
		 
		return max1+max2;
		}

};

int main(){
EelAndRabbit li;
int ls[] = {1,1,1}
vector <int> l = ;

vector<int>t = <2,0,4> ;

cout<<li.getmax(l,t)<<endl;

}
