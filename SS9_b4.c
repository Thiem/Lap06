#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,k;
	printf("Please enter number integer > 0:");
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		printf("\n");
		if(i==1){
				printf("(a)%d",i);
			}
		else{
			for(j=1;j<=i;j++){
				printf("%d",j);
			}	
		}
	}
	for(i=k;i>=1;i--){
		printf("\n");
		if(i==k){
				printf("(b)");
				for(j=1;j<=i;j++){
					printf("%d",j);
				}
			}
		else{
			for(j=1;j<=i;j++){
			printf("%d",j);
			}	
		}
	}
}
