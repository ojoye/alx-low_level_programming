/*function declaration is also called function prototype*/
#include <stdio.h>
#include "main.h"


void fun(int a, int b)
{
	int sum;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	
}
