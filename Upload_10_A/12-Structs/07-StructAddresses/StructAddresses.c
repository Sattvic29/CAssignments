#include <stdio.h>

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
	data.i = 20;
	data.f = 1.2f;
	data.d = 1.2345;
	data.c = 'A';

	//Displaying Values 
	printf("\n\n");
	printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n", data.c);

	printf("\n\n");
	printf("ADDRESSES OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
	printf("'i' Occupies Address From %p\n", &data.i);
	printf("'f' Occupies Address From %p\n", &data.f);
	printf("'d' Occupies Address From %p\n", &data.d);
	printf("'c' Occupies Address %p\n", &data.c);

	printf("Starting Address Of 'Struct MyData' variable 'data' = %p\n\n", &data);

	return(0);
}
