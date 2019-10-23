#include <stdio.h>
#include <stdlib.h>

void Productize(int * dataIn, int * dataOut, int size);

void main()
{
    const int size = 5;
    int dataIn[] = {1, 2, 3, 4, 5};
    int dataOut[5] = {};
    Productize(dataIn, dataOut, size);

    printf("DataOut[] = ");
    for (int i=0; i< size; i++)
        printf("%d,", dataOut[i]);
    
    printf("\n");
}

void Productize(int * dataIn, int * dataOut, int size)
{
    for (int i=0; i < size; i++)
    {
        dataOut[i] = 1;
        for(int j=0; j < size; j++)
        {

            if (i != j) 
            {
                dataOut[i] = dataOut[i] * dataIn[j];
            }
        }
    }

    printf("DataIn[] = ");
    for (int i=0; i< size; i++)
        printf("%d,", dataIn[i]);

    printf("\n");
}


