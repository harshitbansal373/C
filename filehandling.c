#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
FILE *fp;
char x;
fp=fopen("abc","w");
while((x=getchar())!=EOF)
fprintf(fp,"%c",x);
fclose(fp);

fp=fopen("abc","r");
while((x=fgetc(fp))!=EOF)
printf("%c",x);
fclose(fp);

getch();
}