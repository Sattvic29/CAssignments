#include <stdio.h>

//Defining struct
struct MyData
{
    int* ptr_i;
    int i;

    float* ptr_f;
    float f;

    double* ptr_d;
    double d;
};

int main(void)
{
    //variable declarations
    struct MyData data;

    //code
    data.i = 10;
    data.ptr_i = &data.i;

    data.f = 29.07f;
    data.ptr_f = &data.f;

    data.d = 23.4354545;
    data.ptr_d = &data.d;

    printf("\n");
    printf("i = %d\n", *(data.ptr_i));
    printf("Address Of 'i' = %p\n", data.ptr_i);

    printf("\n");
    printf("f = %f\n", *(data.ptr_f));
    printf("Address Of 'f' = %p\n", data.ptr_f);

    printf("\n");
    printf("d = %lf\n", *(data.ptr_d));
    printf("Address Of 'd' = %p\n", data.ptr_d);

    return(0);
}
