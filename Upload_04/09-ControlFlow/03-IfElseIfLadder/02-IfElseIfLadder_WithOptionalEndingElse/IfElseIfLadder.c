#include <stdio.h>

int main(void)
{
	//variable decalartion
	int num;

	//code 
	printf("\n\n");

	printf("Enter Value For 'num' : ");
	scanf("%d", &num);

	//IF- ELSE- IF Ladder Begins...
	if (num < 0)
		printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num);

	else if ((num > 100) && (num <= 200))
		printf("Num = %d Is Between 100 AND 200 !!!\n\n", num);

	else if ((num > 200) && (num <= 300))
		printf("Num = %d Is Between 200 AND 300 !!!\n\n", num);

	else if ((num > 300) && (num <= 400))
		printf("Num = %d Is Between 300 AND 400 !!!\n\n", num);

	else if ((num > 400) && (num <= 500))
		printf("Num = %d Is Between 400 AND 500 !!!\n\n", num);

	else if (num > 500)
		printf("Num = %d Is Greater Than 500 !!!\n\n", num);

	else
		printf("Invalid Value Entered !!!\n\n", num);

	return(0);
}
