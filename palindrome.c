#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,rev=0,temp;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
 rev=rev*10;
 rev=rev+temp%10;
 temp=temp/10;
}
if(n==rev)
printf("this is palindrome");
else
printf("this is not palindrome");
getch();
}