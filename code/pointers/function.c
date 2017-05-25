#include <stdio.h>

void swap (int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("before swap a: [%i] b: [%i] \n", a, b);

    swap(&a, &b);

    printf("after swap a: [%i] b: [%i] \n", a, b);

    return 0;
}
