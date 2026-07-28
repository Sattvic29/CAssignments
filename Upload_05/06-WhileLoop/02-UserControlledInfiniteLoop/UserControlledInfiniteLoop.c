#include <stdio.h>

int main(void)
{
	//variablde declarations
	char option, ch = '/0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		while (1)
		{
			printf("In Loop...\n");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
				break;
		}

		printf("\n\n");
		printf("EXITING USER CONTROLLED INFINTE LOOP...");
		printf("\n\n");
	}

	else
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite Loop... Please Try Again...\n\n");

	return(0);
}
