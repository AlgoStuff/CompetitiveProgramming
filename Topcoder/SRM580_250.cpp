#include<iostream>
#include<vector>
using namespace std;
class ShoutterDiv2{
	public:
		int count(vector <int> s, vector <int> t){
		int c = 0;
		for(int i = 0 ; i < s.size();i++){
				for(int j = i+1 ; j < t.size();j++){
					if(s[i] <= t[j] && t[i] >= s[j]) c++;	
				}
					
		}
		return c;}


};
int main(){



}
