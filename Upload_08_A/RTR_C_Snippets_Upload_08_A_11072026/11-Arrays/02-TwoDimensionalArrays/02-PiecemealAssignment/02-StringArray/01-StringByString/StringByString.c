#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char[], char[]);

	//variable declarations
	char strArray[5][10];
	int char_size;
	int strArray_size;
	int strArray_num_elements, strArray_num_rows, strArray_num_columns;
	int i;

	//code
	printf("\n\n");

	char_size = sizeof(char);

	strArray_size = sizeof(strArray);
	printf("Size Of Two Dimensional (2D) Character Array Is = %d\n\n", strArray_size);

	strArray_num_rows = strArray_size / sizeof(strArray[0]);
	printf("Number Of Rows In Two Dimensional (2D) Character Array Is = %d\n\n", strArray_num_rows);

	strArray_num_columns = sizeof(strArray[0]) / char_size;
	printf("Number Of Columns In Two Dimensional (2D) Character Array Is = %d\n\n", strArray_num_columns);

	strArray_num_elements = strArray_num_rows * strArray_num_columns;
	printf("Maximum Number Of Elements (Character) In Two Dimensional (2D) Character Array is = %d\n\n", strArray_num_elements);

	//PIECE-MEAL
	MyStrcpy(strArray[0], "My");
	MyStrcpy(strArray[1], "Name");
	MyStrcpy(strArray[2], "Is");
	MyStrcpy(strArray[3], "Satvik");
	MyStrcpy(strArray[4], "Vijay");
	MyStrcpy(strArray[5], "Nagare");

	printf("\n\n");
	printf("The String In The 2D Character Array Are : \n\n");

	for (i = 0; i < strArray_num_rows; i++)
	{
		printf("%s", strArray[i]);
	}
	printf("\n\n");

	return(0);
}

void MyStrcpy(char str_destination[], char str_source[])
{
	//function prototype
	int MyStrlen(char[]);

	//variable delcrations
	int iStringLength = 0;
	int j;

	//code
	iStringLength = MyStrlen(str_source);
	for (j = 0; j < iStringLength; j++)
	{
		str_destination[j] = str_source[j];
	}
	str_destination[j] = '\0';
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
