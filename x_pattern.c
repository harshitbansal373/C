/*Given a odd length word. Print in following pattern
        t    d
         h  r
           i
         h   r
        t      d*/
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i,j;
	printf("Enter the string");
	scanf("%s",string);
	for(i=0;i<strlen(string);i++)
	{
		for(j=0;j<strlen(string);j++)
		{
			if(i==j)
				printf("%c",string[i]);	
			else if(i+j==strlen(string)-1)
				printf("%c",string[j]);
			else
				printf(" ");
		}
		printf("\n");	
	}
}
