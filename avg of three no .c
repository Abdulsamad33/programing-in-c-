#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter first no");
	scanf("%f",&a);
	printf("enter sec no");
	scanf("%f",&b);
	printf("enter third no");
	scanf("%f",&c);
	float mean = (a+b+c)/3;
	printf("mean = %f",mean);
	return 0;
	
}
