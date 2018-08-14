#include<conio.h>
#include<stdio.h>
#define MAXSIZE 100

void push(int);
int pop();
int st[MAXSIZE];
int top=-1;

void main()
{
clrscr();
int i,n;
int fact=1;
printf("please enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
push(i);
while(top>=0){
int temp;
temp=pop();
fact=fact*temp;
}
printf("factorial is = %d",fact);
getch();
}

void push(int a)
{
if(top==MAXSIZE-1){
printf("stack is overflow");
}else{
top=top+1;
st[top]=a;
}
}

int pop()
{
int temp;
if(top==-1){
printf("stack is empty");
}else{
temp=st[top];
top=top-1;
}
return(temp);
}


