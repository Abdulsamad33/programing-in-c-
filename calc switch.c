#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter  your choice\n 1 for additon \n 2 for subtraction");
	scanf("%d",&i);
	printf("enter  your 1st choice");
	scanf("%d",&a);
	printf("enter  your 2nd choice");
	scanf("%d",&b);
	switch (i)
	{
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
		default:
			printf("enter a valid choice");
	}
	
}
