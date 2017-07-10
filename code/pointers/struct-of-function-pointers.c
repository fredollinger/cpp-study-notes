#include <stdio.h> // printf

void talk() {
    printf("meow \n");
}

void move() {
    printf("scamper \n");
}

// void (*talk)(void);
//void (*move)(void);

struct animal {
    void (*talk)();
    void (*move)();
};

int main()
{
    return 0;
}
