//#find duplicate value 

#include<stdio.h>
int main(){
int i,j,arr[10];
for(i=0;i<=9;i++)
scanf("%d",&arr[i]);
for(i=0;i<=9;i++)
{
   for(j=i+1;j<=9;j++){
   if(arr[i]==arr[j])
   printf("\n%d",arr[i]);
   }
}
return 0;
}