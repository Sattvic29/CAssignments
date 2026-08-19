#include <stdio.h>

int main(void)
{
	//variable declarations
	float fArray[10];
	float *fptr = NULL;
	int i;

	//code
	for (i = 0; i < 10; i++)
		fArray[i] = (float)(i + 1) * 1.5f;

	fptr = fArray;

	printf("\n\n");
	printf("Elements Of The 'float' Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("fArray[%d] = %f\n", i, *(fptr + i));

	printf("\n\n");
	printf("Elements Of The 'float' Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("fArray[%d] = %f \t \t Address : %p\n", i, *(fptr + i), (fptr + i));

	return(0);
}
