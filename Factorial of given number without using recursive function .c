// Factorial of given number without using recursive function 

#include"stdio.h"

int main(void){
	int n,i,fact=1;
	printf("Factorial Of Given Number \n");
	printf("\n");
	//Read the INPUT	
	printf("Enter the number:");
	scanf("%d",&n);
	// operation
	for(i=1;i<=n;i++){
		fact = fact*i;
	}
	//OUTPUT
	printf("\n");
	printf("Factorial of %d is %d ",n,fact);
	
	return 0;
	
}
