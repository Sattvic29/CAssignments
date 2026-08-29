#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrrev(char*, char*);
	int MyStrlen(char*);

	//variable declarations
	char* chArray_Original = NULL;
	char* chArray_Reversed = NULL;
	int original_string_length;

	//code

	//string input
	printf("\n\n");

	chArray_Original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));

	if (chArray_Original == NULL)
	{
		printf("MEMORY ALLOCATION FOR ORIGINAL STRING FAILED!!! EXITING NOW...\n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGTH);

	//string reverse
	original_string_length = MyStrlen(chArray_Original);

	chArray_Reversed = (char*)malloc((original_string_length + 1) * sizeof(char));

	if (chArray_Reversed == NULL)
	{
		printf("MEMORY ALLOCATION FOR REVERSED STRING FAILED!!! EXITING NOW...\n\n");
		exit(0);
	}

	MyStrrev(chArray_Reversed, chArray_Original);

	//string outout
	printf("\n\n");

	printf("The Original String Entered By You Is : \n\n");
	printf("%s\n", chArray_Original);

	printf("\n\n");

	printf("The Reversed String Is : \n\n");
	printf("%s\n", chArray_Reversed);

	if (chArray_Reversed)
	{
		free(chArray_Reversed);
		chArray_Reversed = NULL;

		printf("\n\n");
		printf("MEMORY ALLOCATED TO REVERSED STRING HAS BEEN SUCCESSFULLY FREED!!!\n\n");
	}

	if (chArray_Original)
	{
		free(chArray_Original);
		chArray_Original = NULL;

		printf("\n\n");
		printf("MEMORY ALLOCATED TO ORIGINAL STRING HAS BEEN SUCCESSFULLY FREED!!!\n\n");
	}

	return(0);
}

void MyStrrev(char* str_destination, char* str_source)
{
	//function prototype
	int MyStrlen(char*);

	//variable declarations
	int iStringLength = 0;
	int i;
	int j;
	int len;

	//code
	iStringLength = MyStrlen(str_source);
	len = iStringLength - 1;

	for (i = 0, j = len; i < iStringLength && j >= 0; i++, j--)
	{
		*(str_destination + i) = *(str_source + j);
	}

	*(str_destination + i) = '\0';
}

int MyStrlen(char* str)
{
	//variable declarations
	int j;
	int string_length = 0;

	//code

	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
		{
			break;
		}
		else
		{
			string_length++;
		}
	}

	return(string_length);
}
