#include <stdio.h>

//defing struct
struct MyData
{
	int i;
	float f;
	double d;
	char c;
} data = { 20, 1.2f, 1.2234, 'A' };

int main(void)
{
	//code
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n\n", data.c);

	return(0);

}
