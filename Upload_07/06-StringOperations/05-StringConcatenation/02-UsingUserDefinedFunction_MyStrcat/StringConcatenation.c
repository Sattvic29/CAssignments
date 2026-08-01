#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function declaration
	void MyStrCat(char[], char[]);

	//variable declarations
	char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH];

	//code

	//STRING INPUT
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two, MAX_STRING_LENGTH);

	//STRING CONCAT
	printf("\n\n");
	printf("*****BEFORE CONCTENATION *****");
	printf("\n\n");
	printf("The Original First String Entered By You (i.e : 'chArray_One[]') Is : \n\n");
	printf("%s\n", chArray_One);

	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'chArray_Two[]') Is : \n\n");
	printf("%s\n", chArray_Two);

	MyStrCat(chArray_One, chArray_Two);

	printf("\n\n");
	printf("*****AFTER CONCATENATION*****");
	printf("\n\n");
	printf("'chArray_One[]' Is : \n\n");
	printf("%s\n", chArray_One);

	printf("\n\n");
	printf("'ch_Array_Two[]' Is : \n\n");
	printf("%s\n", chArray_Two);

	return(0);
}

void MyStrCat(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable declarations
	int iStringLength_Source = 0, iStringLength_Destination = 0;
	int i, j;

	//code
	iStringLength_Source = MyStrlen(str_source);
	iStringLength_Destination = MyStrlen(str_destination);

	for (i = iStringLength_Destination, j = 0; j < iStringLength_Source; i++, j++)
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
