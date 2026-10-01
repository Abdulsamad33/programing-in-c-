#include<stdio.h>
int main()
{
	float pie = 3.14;
	float r;
	printf("enter the radius of the circle");
	scanf("%f",&r);
	float area = pie*r*r;
	printf("area : %f",area);
	float circumfarence = r*2;
	printf(" circumfarence: %f",circumfarence);
	return 0;
}
