#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class PrimalUnlicensedCreatures{
public:

	int maxWins(int initialLevel, vector <int> grezPower){
	int count = 0;

	sort(grezPower.begin(),grezPower.end());
		for(int i = 0;  i < grezPower.size();i++){
		if(initialLevel <= grezPower[i]) break;
		else {initialLevel = initialLevel +  grezPower[i]/2; count++;}
		}
	return count;	
	}




};



int main(){







}
