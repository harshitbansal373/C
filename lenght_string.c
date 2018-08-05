#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,l=0;
char s[20];
printf("plz enter an array");
gets(s);
for(i=0;s[i]!='\0';i++)
l++;
printf("length=%d",l);
getch();
}
