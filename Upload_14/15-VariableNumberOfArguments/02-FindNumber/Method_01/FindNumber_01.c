#include <stdio.h>
#include <stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void)
{
    //function prototypes
    void FindNumber(int, int, ...);

    //code
    printf("\n\n");

    FindNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 2, 3, 5, 7, 3, 1, 8, 2, 1, 4);

    return(0);
}

void FindNumber(int num_to_be_found, int num, ...) 
{
    //variable declarations
    int count = 0;
    int n;
    va_list numbers_list;

    //code
    va_start(numbers_list, num);

    while (num)
    {
        n = va_arg(numbers_list, int);
        if (n == num_to_be_found)
            count++;
        num--;
    }

    if (count == 0)
        printf("Number %d Could Not Be Found !!!\n\n", num_to_be_found);
    else
        printf("Number %d Found %d Times !!!\n\n", num_to_be_found, count);

    va_end(numbers_list);
}
