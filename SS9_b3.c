#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,a,b,num;
	int sum;
	a = 0;
	b = 1;
	sum = 1;
	printf("Please enter number integer:");
	scanf("%d",&num);
		if(num < 0){
			printf("\nThere is no fibonaci number sequence!");
		}else{
			if(num == 0 || num == 1){
				
			}else{
				printf("\n%d,%d,%d,",a,b,sum);
				for(i=2;i<num;i++){
//					if(i==0){
//						
//					}
					a=b;
					b=sum;
					sum = a + b;
					printf("%d,",sum);
				}
			}
		}	
	return 0;
}
