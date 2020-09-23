#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2,i;
	  int sum = 0;
	  printf("Please enter number 1:");
	  scanf("%d",&num1);
	  printf("\nPlease enter number 2:");
	  scanf("%d",&num2);
	  if(num1 > num2){
	    for(i=num2;i<=num1;i++){
	        if(i%2!=0){
	          sum += i;
	        }
	    }
	      printf("\nThe sum of all odd numbers between the two numbers entered = %d",sum);
	  }else{
	    if(num1<num2){
	       for(i=num1;i<=num2;i++){
	        if(i%2!=0){
	          sum += i;
	        }
	    } 
	      printf("\nThe sum of all odd numbers between the two numbers entered = %d",sum);
	    }else{
	      printf("\nThe sum of all odd numbers between the two numbers entered = 0");
	    }
	  }
	  return 0;
}
