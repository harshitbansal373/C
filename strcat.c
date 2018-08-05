#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
char a[20],b[20];
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++);
a[i]=' ';
for(i++,j=0;b[j]!='\0';i++,j++)
a[i]=b[j];
a[i]='\0';
puts(a);
getch();
}
