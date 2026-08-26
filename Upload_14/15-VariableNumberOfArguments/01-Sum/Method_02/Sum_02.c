#include <stdio.h>
#include <stdarg.h>

int main(void)
{
    //function prototypes
    int CalculateSum(int, ...);

    //variable declarations
    int answer;

    //code
    printf("\n\n");

    answer = CalculateSum(5, 10, 20, 30, 40, 50);
    printf("Answer = %d\n\n", answer);

    answer = CalculateSum(10, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    printf("Answer = %d\n\n", answer);

    answer = CalculateSum(0);
    printf("Answer = %d\n\n", answer);

    return(0);
}

int CalculateSum(int num, ...) 
{
    // variable declarations
    int sum_total = 0;
    int n;

    va_list numbers_list;

    //code
    va_start(numbers_list, num);

    while (num)
    {
        n = va_arg(numbers_list, int);
        sum_total = sum_total + n;
        num--;
    }

    va_end(numbers_list);
    return(sum_total);
}

int va_CalculateSum(int num, va_list list)
{
    //variable declarations
    int n;
    int sum_total = 0;
    
    while (num)
    {
        n = va_arg(list, int);
        sum_total = sum_total + n;
        num--;
    }

    return(sum_total);
}
