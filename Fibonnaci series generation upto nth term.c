// Fibonnai series generation upto nth term:
// 0 1 2 3 5 8 13....

#include"stdio.h"
int main(void){
	int n,i,a=0,b=1,c;
	printf("Enter the Number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;	
}


