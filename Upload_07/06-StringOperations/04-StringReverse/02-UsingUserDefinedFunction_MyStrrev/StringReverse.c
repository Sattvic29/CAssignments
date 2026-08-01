#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototypes
	void MyStrrev(char[], char[]);

	//variable declarations
	char chArray_Original[MAX_STRING_LENGTH], chArray_Reversed[MAX_STRING_LENGTH];

	//code
	
	//STRING INPUT
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGTH);

	//STRING REVERSE
	MyStrrev(chArray_Reversed, chArray_Original);

	//STRING OUTPUT
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is : \n\n");
	printf("%s\n", chArray_Reversed);

	return(0);
}

void MyStrrev(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength = 0;
	int i, j, len;

	//code
	iStringLength = MyStrlen(str_source);

	len = iStringLength - 1;

	for (i = 0, j = len; i < iStringLength, j >= 0; i++, j--)
	{
		str_destination[i] = str_source[j];
	}

	str_destination[i] = '\0';
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
