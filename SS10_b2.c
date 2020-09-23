#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,k;
	printf("Please enter number integer:");
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
	}
	return 0;
}
