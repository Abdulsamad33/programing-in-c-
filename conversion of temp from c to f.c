#include<stdio.h>
int main()
{
	float t;
	printf("Enter temprature in celcius");
	scanf("%f",&t);
	float temp = t*1.8+32;
	printf("temp in farenhite= %f",temp);
	return 0;
}
