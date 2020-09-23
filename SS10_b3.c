#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	printf("Please enter number of a multiplication table:");
	scanf("%d",&j);
	for(i=0;i<=9;i++){
		printf("%d * %d = %d\n",j,i,i*j);
	}
	return 0;
}
