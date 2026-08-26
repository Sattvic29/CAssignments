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
    //function prototypes
    void ChangeValues(struct MyData *);

    //variable declarations
    struct MyData* pData = NULL;

    //code
    printf("\n\n");

    pData = (struct MyData*)malloc(sizeof(struct MyData));
    if (pData == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY!!! EXITTING NOW ...\n\n");
        exit(0);
    }
    else
        printf("SUCCESSFULLY ALLOCATED MEMORY!!!\n\n");

    //Assigning data values
    pData->i = 30;
    pData->f = 11.45f;
    pData->d = 1.2995;

    //Displaying data values
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", pData->i);
    printf("f = %f\n", pData->f);
    printf("d = %1f\n", pData->d);

    ChangeValues(pData);

    //Displaying values
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", pData->i);
    printf("f = %f\n", pData->f);
    printf("d = %1f\n", pData->d);

    if (pData)
    {
        free(pData);
        pData = NULL;
        printf("MEMORY ALLOCATED HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return(0);
}

void ChangeValues(struct MyData* pParam_Data)
{
    //code
    pParam_Data->i = 9;
    pParam_Data->f = 8.2f;
    pParam_Data->d = 6.1998;

}
