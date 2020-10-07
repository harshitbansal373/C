// Global variables and Constants using limits.h library

#include<stdio.h>
#include<limits.h>

int main(void){
	printf("*********************************************\n");
	printf("LIMITS of Various Data-Types \n");
	printf("*********************************************\n");
	printf("\n");
	printf("SIGNED DATA TYPES  : \n");
	printf("\n");
	printf("Signed short minimum value: %d \n",SHRT_MIN);
	printf("Signed short maximum value: %d \n",SHRT_MAX);
	printf("Signed int minimum value: %d \n",INT_MIN);
	printf("Signed int maximum value: %d \n",INT_MAX);
	printf("Signed Long minimum value: %d \n",LONG_MIN);
	printf("Signed Long maximum value: %d \n",LONG_MAX);
	printf("Signed char minimum value: %d \n",CHAR_MIN);
	printf("Signed char maximum value: %d \n",CHAR_MAX);
	printf("\n");
	printf("UNSIGNED DATA TYPES :\n ");
	printf("\n");
	
	printf("UnSigned short maximum value: %d \n",USHRT_MAX);
	
	printf("UnSigned int maximum value: %d \n",UINT_MAX);
	
	printf("UnSigned Long maximum value: %d \n",ULONG_MAX);

	printf("UnSigned char maximum value: %d \n",UCHAR_MAX);
	printf("\n");
	printf("*********************************************\n");

	return 0;
}
