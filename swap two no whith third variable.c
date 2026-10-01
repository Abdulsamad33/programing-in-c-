#include <stdio.h>

int main()
{
    int a=1, b=2, temp;
	temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

