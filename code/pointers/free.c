#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()
#include <string.h> // bzero()

char* getstr() {
    char *pchar;
    pchar = (char *) malloc(sizeof(char) * 10);
    strcpy(pchar, "my string");
    return pchar;
}

int main()
{
    char *str = getstr();
    printf("[%s] \n", str);
    free(str);
    str = NULL;
    return 0;
}
