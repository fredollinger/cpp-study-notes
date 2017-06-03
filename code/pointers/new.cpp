#include <stdio.h>   // printf()

int main()
{
    int *p = new int();
    *p = 10;

    printf ( "\n Address of var is: %p \n", p);
    printf ( "\n Value of var is: %d \n", *p);

    delete p;
    p = NULL;

    return 0;
}
