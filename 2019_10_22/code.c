#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool match (int * data, int length, int matchSum);

int main ()
{
    const int numElements = 4;
    int data [4] = {10, 15, 3, 7};
    int matchSum = 22;

    bool result;

    // Test it!
    for (int i = 0; i <= 25; i++)
    {
        match (data, numElements, i);
    }
}


bool match (int * data, int length, int matchSum)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1 ; j < length; j++)
        {
            if (data[i] + data[j] == matchSum)
            {
                printf("matchSum (%d, %d) = %d\n", data[i], data[j], matchSum);
                return true;
            }
        }
    }
    return false;
}
