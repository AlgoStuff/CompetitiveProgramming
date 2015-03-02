#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a;
		scanf("%d",&n);
		if(n==1){
			printf("0\n");
			continue;
		}
			
		a=sqrt(n-1);
		while((a*(a+1))/2>n-1){
			a--;
		}
		while((a*(a+1))/2 <n-1){
			a++;
		}
		printf("%d\n",a);
	}

}
