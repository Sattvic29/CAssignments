#include <stdio.h>
#include <conio.h>

struct MyData
{
	int i;
	float f;
	double d;
	char c;
};

int main(void)
{
	//variable declarations
	struct MyData data;

	//code
	printf("\n\n");

	printf("Enter Integer Value For Data Member 'i' : \n");
	scanf("%d", &data.i);

	printf("Enter Floating Value For Data Member 'f' : \n");
	scanf("%f", &data.f);

	printf("Enter Double Value For Data Member 'd' : \n");
	scanf("%lf", &data.d);

	printf("Enter Character Value For Data Member 'c' \n");
	data.c = getch();

	//Displaying Value Of 'struct MyData'
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n\n", data.c);

	return(0);
}
