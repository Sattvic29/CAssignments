#include <stdio.h>

enum
{
	NEGATIVE = -1,
	ZERO,
	POSITIVE
};

int main(void)
{
	//function declarations
	int Diffrence(int, int, int*);

	//variable declarations
	int a;
	int b;
	int answer, ret;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &a);

	printf("Enter Value Of 'B' : ");
	scanf("%d", &b);

	ret = Diffrence(a, b, &answer);

	printf("\n\n");
	printf("Diffrence Of %d And %d = %d\n\n", a, b, answer);

	if (ret == POSITIVE)
		printf("The Diffrence Of %d And %d Is Positive!!!\n\n", a, b);

	else if (ret = NEGATIVE)
		printf("The Diffrence Of %d And %d Is Negaive!!!\n\n", a, b);

	else
		printf("The Diffrence Of %d And %d Is Zero!!!\n\n", a, b);

	return(0);
}

int Diffrence(int x, int y, int* diff)
{
	//code
	*diff = x - y;

	if (*diff > 0)
		return(POSITIVE);
	else if (*diff < 0)
		return(NEGATIVE);

	else
		return(ZERO);
}
