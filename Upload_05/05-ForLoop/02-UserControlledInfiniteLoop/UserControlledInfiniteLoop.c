#include <stdio.h>

int main(void)
{
	//variable declarations
	char option, ch = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		for (;;)
		{
			printf("In Loop...\n");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
				break;
		}
	}

	printf("\n\n");
	printf("EXITTINY USER CONTROLLED INFINITE LOOP...");
	printf("\n\n");

	return(0);
}
