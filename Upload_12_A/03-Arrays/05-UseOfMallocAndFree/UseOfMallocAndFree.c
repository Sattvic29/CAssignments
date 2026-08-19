#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//variable declarations
	int* ptr_iArray = NULL;
	unsigned int intArrayLength = 0;
	int i;

	//code
	printf("\n\n");
	printf("Enter The Number Of Elements You Want In Your Integer : ");
	scanf("%d", &intArrayLength);

	ptr_iArray = (int*)malloc(sizeof(int) * intArrayLength);
	if (ptr_iArray == NULL)
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS FAILED !!! EXITING NOW...\n\n");
		exit(0);
	}
	else
	{
		printf("\n\n");
		printf("MEMORY ALLOCATION FOR INTEGER ARRAY HAS SUCEEDED !!!\n\n");
		printf("MEMORY ADDRESSES FROM %p to %p HAVE BEEN ALLOCATED TO INTEGER ARRAY !!!\n\n", ptr_iArray, (ptr_iArray + (intArrayLength - 1)));
	}

	printf("\n\n");
	printf("Enter %d Elements For The Integer Array : \n\n", intArrayLength);
	for (i = 0; i < intArrayLength; i++)
		scanf("%d", (ptr_iArray + i));

	printf("\n\n");
	printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", intArrayLength);

	for (i = 0; i < intArrayLength; i++)
	{
		printf("ptr_iArray[%d] = %d \t \t At Address &ptr_iArray[%d] : %p\n", i, ptr_iArray[i], i, &ptr_iArray[i]);
	}
	
	printf("\n\n");
	for (i = 0; i < intArrayLength; i++)
	{
		printf("*(ptr_iArray + %d) = %d \t \t At Address (ptr_iArray[%d] : %p\n", i, ptr_iArray[i], i, &ptr_iArray[i]);
	}

	printf("\n\n");
	for (i = 0; i < intArrayLength; i++)
	{
		printf("*(ptr_iArray + %d) = %d \t \t At Address (ptr_iArray + %d) : %p\n", i, *(ptr_iArray + i), i, (ptr_iArray + i));
	}

	if (ptr_iArray)
	{
		free(ptr_iArray);
		ptr_iArray = NULL;

		printf("\n\n");
		printf("MEMORY ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
	}
	
	return(0);
}
