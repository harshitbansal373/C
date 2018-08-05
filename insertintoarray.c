#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a[20],n,position,i,item;
printf("no. of elements");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("position");
scanf("%d",&position);
printf("insert item");
scanf("%d",&item);
for(i=n;i>=position;i--)
{
a[i]=a[i-1];
}
a[position-1] =item;
printf("now array");
for(i=0;i<=n;i++)
printf("%2d",a[i]);
getch();
}