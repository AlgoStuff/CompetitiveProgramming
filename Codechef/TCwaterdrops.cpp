#include<iostream>
#include <vector>
using namespace std;
class TheExperimentDiv2{
	public:
		vector <int> determineHumidity(vector <int> intensity, int L, vector <int> leftEnd){
		vector <int> v;
		for(int i = 0; i < leftEnd.size() ; i++){int sum = 0;
		for(int j = 0; j < L ; j++) {sum = sum + intensity[j+leftEnd[i]]; intensity[j+leftEnd[i]] = 0;}
				v.push_back(sum);}
		return v;
		
		}







};


int main(){
int n,m,M[1000],in[1000],l;
cin>>n;
for(int i = 0; i < n ; i++){
cin>>in[i];
}
cin>>l;
cin>>m;

for(int i = 0; i < m ; i++){
cin>>M[i];
}

for(int i = 0; i < m ; i++){int sum = 0;
for(int j = 0; j < l ; j++) {sum = sum + in[j+M[i]]; in[j+M[i]] = 0;}
cout<<sum<<" ";}
cout<<endl;
return 0;}
