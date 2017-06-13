#include <stdio.h>  // printf
#include <stdlib.h> // malloc
#include <string.h> // malloc

#define MAX_NUMBER_OF_STRINGS 10

struct strstruct {
    char *argv[MAX_NUMBER_OF_STRINGS];
    int argc;
};

int main()
{
    struct strstruct st;
    struct strstruct *p_st = &st;
    st.argc = 0;

    const char *string0 = "My little pony";
    st.argv[0] = (char*)malloc(strlen(string0) + 1);
    strncpy(st.argv[0], string0, strlen(string0) + 1);
    printf("string0: [%s] is [%s] \n", string0, st.argv[0]);

    return 0;
}
