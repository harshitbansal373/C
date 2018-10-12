//#factorial using function

#include<stdio.h>
void facto(int a);
int main(){
int x;
scanf("%d",&x);
facto(x);
return 0;
}

void facto(int a){
int fac=1,i;
for(i=1;i<=a;i++)
fac=fac*1;
printf("%d",fac);
}