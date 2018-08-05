#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
 for(j=6-i;j>=1;j--)
 {
 printf("*");
 }
printf("\n");
}
getch();
}