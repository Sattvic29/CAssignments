#include <stdio.h>
#include <stdlib.h>

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
    struct MyData* pData = NULL;

    //code
    printf("\n");
    pData = (struct MyData*)malloc(sizeof(struct MyData));

    if (pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY!!! EXITTING NOW...\n\n");
        exit(0);
    }
    else
    {
        printf("SUCCESSFULLY ALLOCATED MEMORY!!!\n\n");
    }

    (*pData).i = 11;
    (*pData).ptr_i = &(*pData).i;

    (*pData).f = 12.34f;
    (*pData).ptr_f = &(*pData).f;

    (*pData).d = 23.234234;
    (*pData).ptr_d = &(*pData).d;

    printf("\n");
    printf("i = %d\n", *((*pData).ptr_i));
    printf("Address Of 'i' = %p\n", (*pData).ptr_i);

    printf("\n");
    printf("f = %f\n", *((*pData).ptr_f));
    printf("Address Of 'f' = %p\n", (*pData).ptr_f);

    printf("\n");
    printf("d = %lf\n", *((*pData).ptr_d));
    printf("Address Of 'd' = %p\n", (*pData).ptr_d);

    if (pData)
    {
        free(pData);
        pData = NULL;
        printf("MEMORY ALLOCATED HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return(0);
}
