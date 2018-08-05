#include<stdio.h>
#include<string.h>
#include<conio.h>

#define MAX 100

int push(int *stack,int top,int info) {
int i;
if(top>=MAX-1)
printf("overflow");
else{
top=top+1;
stack[top]=info;
}
return top;
}

int pop(int *stack,int *top){
int temp;
if(*top==-1){
printf("stack underflow");
}
else{
temp=stack[*top];
*top=*top-1;
}
return temp;
}


void main()
{
clrscr();
int n,i,fact=1;
int top=-1;
int stack[MAX];
printf("\n enter number");
scanf("%d",&n);
if(n<=0)
{
printf("\nthe number can not be less than 0");
}
else{
   for(i=n;i>0;i--)
   {
   top=push(stack,top,i);
   }

    while(top>=0)
    {
    fact=fact*pop(stack,&top);
    }
    printf("\nfactorial is %d\n",fact);
}

getch();
}



