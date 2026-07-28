#include <stdio.h>

int main(void)
{
	//variable declarations
	int i, j, k;

	//code
	printf("\n\n");

	i = 1;
	do
	{
		printf("i = %d\n", i);
		printf("-----");

		j = 1;
		do
		{
			printf("j = %d\n", j);
			printf("-----");

			k = 1;
			do
			{
				printf("\t\tk = %d\n", k);
				k++;
			} while (k <= 3);
			printf("\n\n");
			j++;
		} while (j <= 5);
		printf("\n\n");
		i++;
	} while (i <= 10);

	return(0);
}
