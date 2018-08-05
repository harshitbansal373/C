#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[2][2];
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 scanf("%d",&a[i][j]);
}
printf("basic\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 printf("%d",a[i][j]);
 printf("\n");
}
printf("transpose\n");
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 printf("%d",a[j][i]);
 printf("\n");
}
getch();
}