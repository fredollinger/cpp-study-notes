#include <stdio.h>  // printf
#include <stdlib.h> // malloc
#include <string.h> // strncpy

#define MAX_NUMBER_OF_STRINGS 10

struct strstruct {
    char *argv[MAX_NUMBER_OF_STRINGS];
    int argc;
};

void addstring(struct strstruct *st, const char *string) {
    st->argv[st->argc] = (char*)malloc(strlen(string) + 1);
    strncpy(st->argv[st->argc], string, strlen(string) + 1);
    st->argc++;
}

void printstring(struct strstruct *st, int i) {
    printf("print string [%i]: [%s] \n", i, st->argv[i]);
}

int main()
{
    struct strstruct st;
    struct strstruct *p_st = &st;
    st.argc = 0;

    addstring(p_st, "applejack");
    addstring(p_st, "pinkie pie");

    printstring(p_st, 0);
    printstring(p_st, 1);
    printstring(p_st, 2);

    return 0;
}
