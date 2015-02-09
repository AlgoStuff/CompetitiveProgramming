/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	
//																		
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}


struct node{
	node* left;
	node* right;
	int val;
};
int low,high;
node* bst(node* root,int n){
	if(root==NULL){
		root->left = NULL;
		root->right = NULL;
		root->val=n;
		return root;
	}
	else if (root->val > n){
		high++;
		j
	}

}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
	}
	return 0;
}
