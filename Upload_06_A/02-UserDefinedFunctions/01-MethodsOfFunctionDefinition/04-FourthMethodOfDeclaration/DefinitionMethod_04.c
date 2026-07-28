#include <Stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	//function prototype
	int MyAddition(int, int);

	//variable declarations
	int a, b, result;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b);

	result = MyAddition(a, b);
	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a, b, result);

	return(0);
}

int MyAddition(int a, int b)
{
	//variable declaration
	int sum;

	//code
	sum = a + b;
	return(sum);
}
