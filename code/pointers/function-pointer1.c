#include <stdio.h> // printf

int add(int a, int b) {
    return (a+b);
}

int (*addPtr)(int, int);

int main()
{
    int a = 10;
    int b = 20;
    addPtr = add;

    int c = addPtr(a, b);

    printf("result %i + %i = %i \n", a, b, c);

    return 0;
}
