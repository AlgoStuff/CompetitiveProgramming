#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long AB,AC,AD;
		scanf("%ld %ld %ld",&AB,&AC,&AD);
		AD=2*AD;
		if(AB+AC>AD&&AB+AD>AC&&AD+AC>AB)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
