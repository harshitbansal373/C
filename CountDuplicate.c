//#count duplicate value 

#include<stdio.h>
int main(){
int i,j,arr[10];
int count=0;
for(i=0;i<=9;i++)
scanf("%d",&arr[i]);
for(i=0;i<=9;i++)
{
   for(j=i+1;j<=9;j++){
   if(arr[i]==arr[j])
   count=count+1;
   }
}
printf("%d",count);
return 0;
}