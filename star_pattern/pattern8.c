#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
 for(j=1;j<=5;j++)
 {
 if(j<=6-i)
 printf("%d",j);
 else
 printf(" ");
 }
printf("\n");
}
getch();
}