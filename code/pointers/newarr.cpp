#include <stdio.h>   // printf()

void printarr(int *i, int c) {
    printf ( "\n Address of count %i var is: %p \n", c, i + c);
    printf ( "\n Value of count %i var is: %d \n", c, *(i+c));
}

int main()
{
    int size = 5;
    int count = 0;
    int *arr = new int[size];
    *arr = 10;
    *(arr+1) = 20;

    printarr(arr, count);

    count++;
    printarr(arr, count);

    count++;
    printarr(arr, count);

    delete[] arr;
    arr = nullptr;

    return 0;
}
