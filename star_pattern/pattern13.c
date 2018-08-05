#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=10;j++)
{
if((j+i)%2==0)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}