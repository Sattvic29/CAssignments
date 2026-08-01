#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//variable declarations
	char chArray_Original[MAX_STRING_LENGTH];

	//code

	//STRING INPUT
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray_Original, MAX_STRING_LENGTH);

	//STRING OUTPUT
	printf("\n\n");
	printf("The Original String Entered By You (i.e : 'chArray_Original[]') Is ; \n\n");
	printf("%s\n", chArray_Original);

	printf("\n\n");
	printf("The Reveresed String (i.e 'chArray_Original[]') Is : \n\n");
	printf("%s\n", strrev(chArray_Original));

	return(0);
}
