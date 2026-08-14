#include <stdio.h>

struct MyStruct
{
	int i;
	float f;
	double d;
	char c;
};

union MyUnion
{
	int i;
	float f;
	double d;
	char c;
};

int main(void)
{
	//vaiable declarations
	struct MyStruct s;
	union MyUnion a;

	//code
	//struct
	printf("\n\n");
	printf("Members Of Structs Are : \n\n");
	
	s.i = 1;
	s.f = 1.2f;
	s.d = 1.23456;
	s.c = 'M';

	printf("s.i = %d\n", s.i);
	printf("s.f = %f\n", s.f);
	printf("s.d = %lf\n", s.d);
	printf("s.c = %c\n", s.c);

	printf("Address Of Members Of Structs Are : \n\n");
	printf("s.i = %p\n", &s.i);
	printf("s.f = %p\n", &s.f);
	printf("s.d = %p\n", &s.d);
	printf("s.c = %p\n", &s.c);

	printf("MyStruct = %p\n\n", &s);

	//union
	printf("\n\n");
	printf("Members Of Union Are : \n\n");

	a.i = 1;
	printf("a.i = %d\n", a.i);
	
	a.f = 1.2f;
	printf("a.f = %f\n", a.f);

	a.d = 1.23456;
	printf("a.d = %lf\n", a.d);

	a.c = 'A';
	printf("a.c = %c\n", a.c);

	printf("Address Of Members Of Union Are : \n\n");
	printf("a.i = %p\n", &a.i);
	printf("a.f = %p\n", &a.f);
	printf("a.d = %p\n", &a.d);
	printf("a.c = %p\n", &a.c);

	return(0);
}
