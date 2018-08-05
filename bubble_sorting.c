#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],i,j,swap,size,temp;
printf("enter size of array");
scanf("%d",&size);
printf("enter element of array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
//bubble sorting
for(i=0;i<(size-1);i++)
{
	swap=0;

	for(j=0;j<(size-i);j++)
	{
		if(a[j]>a[j+1])
		{
		  temp=a[j];
		  a[j]=a[j+1];
		  a[j+1]=temp;
		  swap=1;
		}
	}
	 if(swap==0)
	  break;
}
printf("array of bubble sort");
for(i=0;i<size;i++)
printf("%2d",a[i]);
getch();
}
