#include<stdio.h>
int main()
{
	int i;
	printf("enter a number of your choice");
	scanf("%d",&i);
	if (i==0)
	{
		printf("number is zero");
	}
	else if(i<0)
	{
		printf("number is -ve");
	}
	else
	{
		printf("number is +ve");
	}
	return 0;
}
