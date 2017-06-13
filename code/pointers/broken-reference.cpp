#include <stdio.h>  // printf

void setint(int &i) {
    i = 10;
}

int main()
{
    int j = 5;
    int *p_j = &j;

    printf("before setint() j is [%i] \n", j);

    setint(p_j);
    // setint(*p_j);

    printf("after setint() j is [%i] \n", j);

    return 0;
}
