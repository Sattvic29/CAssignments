#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//varible declarations
	char chArray[MAX_STRING_LENGTH];
	int iStringLength = 0;

	//code
	
	//STRING INPUT
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	//STRING OUTPUT
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	//STRING LENTH
	printf("\n\n");
	iStringLength = strlen(chArray);
	printf("Lenght Of String Is = %d Characters !!!\n\n", iStringLength);

	return(0);
}
