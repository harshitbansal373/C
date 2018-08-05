#include<stdio.h>
#include<conio.h>
int func1(void);
int func2(void);
void main()
{
int (*ptr_f)(void);
clrscr();
ptr_f=func1;
(*ptr_f)();
printf("\n");
ptr_f=func2;
(*ptr_f)();
getch();
}

int func1(void)
{
printf("good morning");
return(0);
}

int func2(void)
{
printf("good night");
return(0);
}