#include <stdio.h>
#include <stdlib.h>
int main(){
	int old,i;
	char name[30];
	printf("Please name of you:");
	gets(name);
	printf("\nPlease old of you:");
	scanf("%d",&old);
	for(i=1;i<=old;i++){
		printf("\n%d: %s",i,name);
	}
	return 0;
}
