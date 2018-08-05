#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
char s[20];
gets(s);
for(i=0;s[i]!='\0';i++)
s[i]=s[i]-32;
puts(s);
getch();
}