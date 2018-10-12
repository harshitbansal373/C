#include<stdio.h>
int main(){
int i,a[5],b[5],c[5];
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
printf("%3d",a[i]);

for(i=0;i<5;i++)
scanf("%d",&b[i]);
for(i=0;i<5;i++)
printf("%3d",b[i]);

for(i=0;i<5;i++)
c[i]=a[i]+b[i];
for(i=0;i<5;i++)
printf("%3d",c[i]);

return 0;
}