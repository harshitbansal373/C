#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,i,sum=0;
printf("enter the no.");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
 if(num%i==0)
 sum=sum+i;
}
if(sum==num)
printf("this is perfect no.");
else
printf("this is not perfect no.");
getch();
}