#include <stddef.h> // for NULL
#include <stdio.h> // for printf

int main()
{
    int *p = new int();
    *p = 10;

    printf ( "\n Address of var is: %p \n", p);

    delete p;
    p = NULL;

    *p = 20;

    printf ( "\n Address of var is: %p \n", p);

    return 0;
}
