#include <stdio.h>

int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	printf("Outer Loop Prints Odd Numbers Between 1 to 10. \n\n");
	printf("Inner Loop Prints Even Numbers Between 1 and 10 For Every Odd Number Printed By Outer Loop. \n\n");

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			printf("i = %d\n", i);
			printf("--------\n");
			for (j = 1; j <= 10; j++)
			{
				if (j % 2 == 0)
				{
					printf("\tj = %d\n", j);
				}
				else
				{
					continue;
				}
			}
			printf("\n\n");
		}
		else
		{
			continue;
		}
	}
	printf("\n\n");

	return(0);
}
