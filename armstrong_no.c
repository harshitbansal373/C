#include<stdio.h>
//#include<conio.h>
void main()
{
//clrscr();
int num;
printf("plz enter number to check armstrong no.");
scanf("%d",&num);
int sum=0;
int temp=num;
while(temp!=0)
{
int unit=temp%10;
sum=sum+unit*unit*unit;
temp=temp/10;
}
if(sum==num)
printf("this is armstrong no.");
else
printf("this is not armstrong no.");
//getch();
}