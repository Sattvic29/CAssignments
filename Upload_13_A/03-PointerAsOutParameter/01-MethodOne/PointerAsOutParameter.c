#include <stdio.h>

int main(void)
{
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	//variable declarations
	int a; int b;
	int answer_sum;
	int answer_diffrence;
	int answer_product;
	int answer_quotient;
	int answer_remainder;

	//code
	printf("\n\n");
	printf("Enter Value Of 'A' : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Value Of 'B' : ");
	scanf("%d", &b);

	MathematicalOperations(a, b, &answer_sum, &answer_diffrence, &answer_product, &answer_quotient, &answer_remainder);

	printf("\n\n");
	printf("*****RESULTS***** : \n\n");
	printf("Sum = %d\n\n", answer_sum);
	printf("Diffrence = %d\n\n", answer_diffrence);
	printf("Product = %d\n\n", answer_product);
	printf("Quotient = %d\n\n", answer_quotient);
	printf("Remainder = %d\n\n", answer_remainder);
	return(0);
}

void MathematicalOperations(int x, int y, int* sum, int* diffrence, int* product, int* quotient, int* remainder)
{
	//code
	*sum = x + y;
	*diffrence = x - y;
	*product = x * y;
	*quotient = x / y;
	*remainder = x % y;
}
