#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[3][3],sum=0;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 printf("%d",a[i][j]);
 printf("\n");
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 if(i==j)
 sum=sum+a[i][j];
 }
}
printf("\ntrace of matrix=%d",sum);
getch();
}