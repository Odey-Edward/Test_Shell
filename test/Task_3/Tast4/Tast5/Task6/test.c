#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h> // For memcpy

int main(void)
{
	int *num2;
	int *num = malloc(sizeof(int) * 4);

	for (int i = 0; i < 4; i++)
		num[i] = i;

	for (int i = 0; i < 6; i++)
		printf("num[%d] = %p\n", i, &num[i]);

	printf("%p\n", num);

	//num = realloc(num, 9);
	
	num2 = memcpy(num2, num, 4);

	printf("%p\n", num2);

	return (1);
}
