#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#define numOfProducts 5

using namespace std;

string products[numOfProducts] =
{
	"nikon camera",
	"samsung smartphone",
	"dell inspiron",
	"titan watch",
	"axe deodorant"
};

string qu[numOfProducts] =
{
	"nikon",
	"samsung",
	"dell",
	"titan",
	"axe"
};

string pro[numOfProducts]=
{
	"camera",
	"smartphone",
	"inspiron",
	"watch",
	"deodorant"
};

bool findSubstring(string, string);

int main ()
{
	int n;
	scanf("%d",&n);
	string query;
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		//Read search query from console
		getline(cin,query);
		bool found = false;
		for(int j=0;j<numOfProducts;j++)
		{
			if(findSubstring(qu[j],query) || findSubstring(pro[j],query))
			{
				cout << products[j] << endl;
				found = true;
				break;
				
			}

		}

		if(!found){
			cout<<"WHOOPS"<<endl;
		}

	}
	return 0;
}

//Checks whether string needle is a substring of string haystack
bool findSubstring(string needle, string haystack)
{
	//Rewrite following code snippet for improved search results
	//Hint query : 'DeLL InsPIRon'
	transform(haystack.begin(), haystack.end(), haystack.begin(), ::tolower);
	if(haystack.find(needle) != string::npos)
		return true;
	else
		return false;
	//
}