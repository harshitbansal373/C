#include<stdio.h>
#include<conio.h>
int fibo(int n);
void main()
{
clrscr();
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("% d",fibo(i));
getch();
}

int fibo(int n)
{
if(n==1||n==2)
return(1);
else
return(fibo(n-1)+fibo(n-2));
}