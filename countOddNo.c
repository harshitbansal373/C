#include<stdio.h>
int main(){
int i,x,n,count=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
if(x%2!=0)
count =count+1;
}
printf("odd no. - %d",count);
return 0;
}