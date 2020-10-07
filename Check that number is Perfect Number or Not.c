// Check that number is Perfect Number or Not.

#include<stdio.h>

int main(void){
	int n,i,temp,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++){
		if(n%i == 0){
				sum = sum + i;
			}	
		}
			n=temp;
	if(sum == n){
		printf("%d is Perfect Number",n);
	}
	else{
		printf("%d is Not perfect Number",n);
	}
	return 0;	
}
