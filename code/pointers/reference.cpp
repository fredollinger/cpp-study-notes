#include <stdio.h>  // printf

void setint(int &i) {
    i = 10;
}

int main()
{
    int j = 5;

    printf("before setint() j is [%i] \n", j);

    setint(j);

    printf("after setint() j is [%i] \n", j);

    return 0;
}
