#include <stdio.h>

int main(void)
{
	//variable declarations
	int a;
	int b;
	int c;
	int result;

	//code
	printf("\n\n");
	printf("Enter First Integer : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Second Integer : ");
	scanf("%d", &b);

	printf("\n\n");
	printf("Enter Third Integer : ");
	scanf("%d", &c);

	printf("If Answer = 0, It is 'FALSE'.\n");
	printf("If Answer = 1, It is 'TRUE'.\n\n");

	result = (a <= b) && (b != c);
	printf("LOGICAL AND (&&) : Answer is TRUE (1) If and Only If BOTH Conditions Are True. The Answer is FALSE (0), If any one or Both Conditions are False.\n\n");
	printf("A = %d Is Less Than Or Equal To B= %d AND B = %d Is Not Equal To C = %d \t Answer = %d\n\n", a, b, b, c, result);

	result = (b >= a) || (a == c);
	printf("LOGICAL OR (||) : Answer Is FALSE (0) If And Only If Both Conditions are False. The Answer is TRUE (1), If Any One or Both Conditions Are True.\n\n");
	printf("Either B = %d Is Greater Than Or Equal To A = %d OR A = %d Is Equal To C = %d \t Answer = %d\n\n", b, a, a, c, result);

	result = !a;
	printf("A = %d And Using Logical NOT (!) Operator on A gives Result = %d\n\n", a, result);
	
	result = !b;
	printf("A = %d And Using Local NOT (!) Operator On B gives Result =%d\n\n", b, result);

	result = !c;
	printf("C = %d And Using Logical NOT (!) Operator on C Gives Result = %d\n\n", c, result);

	result = (!(a <= b) && !(b != c));
	printf("Using Logical NOT (!) On (a <= b) And Also On (b != c) And Then AND-ing Them Afterwards Gives Result = %d\n", result);

	printf("\n\n");

	result = !((b >= a) || (a == c));
	printf("Using Logical NOT (!) On Entire Logical Expression (b >= a) || (a == c) Gives Result = %d\n", result);

	printf("\n\n");

	return(0);
}
