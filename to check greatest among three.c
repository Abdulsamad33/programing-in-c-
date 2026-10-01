#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter your first choice :  \n ");
	scanf("%d",&a);
	printf("enter your sec choice :    \n ");
	scanf("%d",&b);
	printf("enter your third choice :  \n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest");
		}
		
	}
	else if(b>c)
	{
		if(b>c)
		{
			printf("b is greatest");
		}
	}
	else
	{
		printf("c is greatest");
	}
	return 0;
}
