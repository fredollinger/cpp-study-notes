#include <stdio.h>
int main()
{
    int var = 10;
    int *p;
    p = &var;

    printf ( "\n Address of &var is: %p \n", &var);
    printf ( "\n Address of p is: %p \n", p);

    printf ( "\n Address of pointer &p is: %p \n", &p);

    /* Note I have used %p for p's value as it should be an address*/
    printf( "\n Value of pointer p is: %p \n", p);

    printf ( "\n Value of var is: %d \n", var);
    printf ( "\n Value of *p is: %d \n", *p);
    printf ( "\n Value of *( &var) is: %d \n", *( &var));
}
