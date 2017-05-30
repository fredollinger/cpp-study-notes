#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()
#include <string.h>  // strncpy()

struct person {
    int age;          // years
    int height_cm;    // cm
    char *first_name; // cm
};

void printPerson(struct person *p) {
    printf("printPerson() name is [%s] \n", p->first_name);
}

int main()
{
    struct person *Fred;
    Fred = (struct person*) malloc(sizeof(struct person));

    Fred->age = 45;
    Fred->height_cm = 70;

    Fred->first_name = (char*) malloc(sizeof(char) * 5);
    strncpy(Fred->first_name,"Fred\0", 5);

    printf("main() name is [%s] \n", Fred->first_name);

    printPerson(Fred);

    return 0;
}
