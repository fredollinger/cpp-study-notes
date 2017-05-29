#include <stdio.h> // for printf

int main()
{
    int *p = new int();
    *p = 10;

    printf ( "\n Address of var is: %p \n", p);

    delete p;
    p = nullptr;

    if (nullptr == p) {
        printf ( "\n ERROR: p is uninitialized. \n");
	return -1;
    }

    *p = 20;

    printf ( "\n Address of var is: %p \n", p);

    return 0;
}
