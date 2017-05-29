#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()
#include <string.h> // bzero()

#define ARRAY_SIZE 5

int main()
{
    int *pint;
    pint = (int *) malloc(sizeof(int) * ARRAY_SIZE);
    bzero(pint, sizeof(int) * ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("[%i]: [%i] \n", i, *(pint+i));
    }

    // Need to free here

    return 0;
}
