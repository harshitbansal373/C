#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n=0;
printf("loop start\n");
loop: n++;
printf("n= %d\n",n);
if(n<5)
goto loop;
printf("loop end");
getch();
}