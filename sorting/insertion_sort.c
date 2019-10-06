#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],size,i,j,temp;
printf("enter size of array");
scanf("%d",&size);
printf("enter elements of array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
//insertion sorting
for(i=1;i<size;i++)
{
	temp=a[i];
	for(j=i-1;j>=0 && a[j]>temp;j--)
	{
		a[j+1]=a[j];
		a[j]=temp;
	}

}
printf("array after insertion sort");
for(i=0;i<size;i++)
printf("%2d",a[i]);
getch();
}
