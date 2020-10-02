// Check the Number is Palindrome or Not.

# include "Stdio.h"

int main(void){
	
	int n,temp,rem,sum=0;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	
	temp = n;
	
	while(n>0){
		rem = n%10;
		sum = sum*10+rem;
		n = n/10;
	}
	n=temp;
	
	if(sum == n){
		printf("%d is Palindrome Number",n);
	}
	else{
		printf("%d is Not Palindrome Number",n);
	}
	return 0;

}
