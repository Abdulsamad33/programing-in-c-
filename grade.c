#include<stdio.h>
int main()
{
	int i,j;
	printf("enter a marks  of your Ist subject");
	scanf("%d",&i);
	printf("enter a marks  of your IInd subject");
	scanf("%d",&j);
	if(i+j<=50)
	{
		printf("grade b");
	}
	else if(i+j<=50 && i+j<=100)
	{
		printf("grade a");
	}
	else
	{
		printf("grade c");
	}
	return 0;
}
