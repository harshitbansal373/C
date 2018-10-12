#include<stdio.h>
int main(){
	int x,y;
	float s;
	int value ;
	printf("plz enter value for x,y");
	scanf("%d%d",&x,&y);
	printf("plz press 1 for add and 2 for minus");
	scanf("%d",&value);
	switch(value){
	case 1:
	{
	s=x+y;
	printf("add = %f",s);
	break;
	}
	case 2:
	{
	s=x-y;
	printf("minus = %f",s);
	break;
	}
	default
	{
	printf("you entered wrong value");
	break;
	}

	}
	return 0;
}