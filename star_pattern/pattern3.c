#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
 for(j=1;j<=10;j++)
 {
 if(j>=i && j<=10-i)
 printf("*");
 else
 printf(" ");
 }
printf("\n");
}
getch();
}