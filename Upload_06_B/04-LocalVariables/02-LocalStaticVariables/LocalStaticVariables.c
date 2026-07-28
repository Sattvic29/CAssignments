#include <stdio.h>

int main(void)
{
	//Variable declarations
	int a = 5;

	//function protypes
	void change_count(void);

	//code
	printf("\n");
	printf("A = %d\n", a);

	change_count();

	change_count();

	change_count();

	return(0);
}

void change_count(void)
{
	//variable declarations
	static int local_count = 0;

	//code
	local_count = local_count + 1;
	printf("Local Count = %d\n", local_count);
}
