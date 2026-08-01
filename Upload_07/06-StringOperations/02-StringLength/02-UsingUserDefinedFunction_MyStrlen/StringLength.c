#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function protype
	int MyStrlen(char[]);

	//variable declarations
	char chArray[MAX_STRING_LENGTH];
	int iStringLenght = 0;

	//code

	//STRING INPUT
	printf("\n\n");
	printf("String A String : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	//STRING OUTPUT
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", chArray);

	//STRING LENGTH
	printf("\n\n");
    iStringLenght = MyStrlen(chArray);
	printf("Lenght Of String Is = %d Character !!!\n\n", iStringLenght);

	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations
	int j;
	int string_length = 0;

	//code
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}
