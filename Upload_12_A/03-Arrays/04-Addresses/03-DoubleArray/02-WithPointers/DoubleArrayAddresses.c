#include <stdio.h>

int main(void)
{
	//variable declarations
	double dArray[10];
	double* dptr = NULL;
	int i;

	//code
	for (i = 0; i < 10; i++)
		dArray[i] = (float)(i + 1) * 1.333333f;

	dptr = dArray;

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("dArray[%d] = %lf\n", i, *(dptr + i));

	printf("\n\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("dArray[%d] = %lf \t \t Address : %p\n", i, *(dptr + i), (dptr + i));

	printf("\n\n");

	return(0);
}
