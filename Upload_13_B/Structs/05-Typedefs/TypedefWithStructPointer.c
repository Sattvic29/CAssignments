#include <stdio.h>
#include <stdlib.h>

//Defining struct
struct MyData
{
    int i;
    float f;
    double d;
};

int main(void)
{
    //variable declarations
    int i_size;
    int f_size;
    int d_size;
    int struct_MyData_size;
    int pointer_to_struct_MyData_size;

    typedef struct MyData* MyDataPtr;
    MyDataPtr pData;

    //code
    printf("\n\n");

    pData = (MyDataPtr)malloc(sizeof(struct MyData));
    if (pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY!!! EXITTING NOW ...\n\n");
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY!!!\n\n");

    //Assigning data values
    pData->i = 10;
    pData->f = 23.54f;
    pData->d = 2.56765;

    //Displaying data values
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", pData->i);
    printf("f = %f\n", pData->f);
    printf("d = %1f\n", pData->d);

    //Calculating sizes
    i_size = sizeof(pData->i);
    f_size = sizeof(pData->f);
    d_size = sizeof(pData->d);

    //Displaying sizes
    printf("\n\n");
    printf("SIZES OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of ‘i' = %d bytes\n", i_size);
    printf("Size of ‘f' = %d bytes\n", f_size);
    printf("Size of ‘d' = %d bytes\n", d_size);

    //Calculating Size Of the entire struct 
    struct_MyData_size = sizeof(struct MyData);
    pointer_to_struct_MyData_size = sizeof(MyDataPtr);

    //Displaying Sizes Of the entire struct
    printf("\n\n");
    printf("Size Of 'struct MyData' = %d bytes\n\n", struct_MyData_size);
    printf("Size Of pointer to 'struct MyData' = %d bytes\n\n", pointer_to_struct_MyData_size);

    if (pData)
    {
        free(pData);
        pData = NULL;
        printf("MEMORY ALLOCATED HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return(0);
}
