//#factorial using recurrsion

#include<stdio.h>
int fact(int x);
int main(){
int x,result;
scanf("%d",&n);
result=fact(n);
printf("%d",result);
return 0;
}

int fact(int x){
if(x==1)
return (1);
else
return (x*fact(x-1));
}