#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],i,j,size,temp,loc,min;
printf("enter array size");
scanf("%d",&size);
printf("enter array element");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
//selection sorting
for(i=0;i<(size-1);i++)
{
	min=a[i];
	loc=i;

	for(j=i+1;j<size;j++)
	{
		if(a[j]>min)
		{
			min=a[j];
			loc=j;
		}
	}
	 temp=a[i];
	 a[i]=a[loc];
	 a[loc]=temp;
}
printf("array of the selection sort");
for(i=0;i<size;i++)
printf("%2d",a[i]);
getch();
}