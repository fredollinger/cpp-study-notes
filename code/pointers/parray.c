#include <stdio.h>

int main()
{
    int arr[4] = { 1, 2, 3, 4 };
    int *parr = arr;
    printf("parr: [%i] \n", *parr);
    parr++;
    printf("parr: [%i] \n", *parr);

    return 0;
}
