#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,l=0;
char s[20];
gets(s);
for(i=0;s[i]!='\0';i++)
l++;
for(i=l-1;i>=0;i--)
printf("%c",s[i]);
getch();
}
