// check whether the number is palindrom or not.
// eg.121 reverse= 121 --> Palindrome number 
#include"stdio.h"

int main(void){
	int n,temp,r,sum;
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r= n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n= temp;
	if(sum==n){
		printf("%d is Palindrome Number",n);
	}
	else{
		printf("%d is Not Palindrom Number",n);
	}
}


