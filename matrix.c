#include<stdio.h>
int main(){
int i,j,arr[2][3];
for(i=0;i<=1;i++)
{
   for(j=0;j<=2;j++)
   scanf("%d",&arr[i][j]);
}
for(i=0;i<=1;i++)
{
   for(j=0;j<=2;j++)
   printf("%5d",&arr[i][j]);
   printf("\n");
}
return 0;
}