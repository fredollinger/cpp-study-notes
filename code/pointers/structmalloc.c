#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()

struct person {
    int age;       // years
    int height_cm; // cm
};

void printPerson(struct person *p) {
    printf("printPerson() age is [%i] and height in cm is [%i] \n", p->age, p->height_cm);
    p->age = 70;
    p->height_cm = 40;
}

int main()
{
    struct person *Fred;
    Fred = (struct person*) malloc(sizeof(struct person));
    Fred->age = 45;
    Fred->height_cm = 70;
    printPerson(Fred);

    printf("main() age is [%i] and height in cm is [%i] \n", Fred->age, Fred->height_cm);

    return 0;
}
