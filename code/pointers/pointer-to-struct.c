#include <stdio.h> // printf

#define MAX_NUMBER_OF_STRINGS 10

struct strstruct {
    char argv[MAX_NUMBER_OF_STRINGS];
    int argc;
};

int main()
{
    printf("TDB NOT DONE \n");
    struct strstruct st;
    struct strstruct *p_st = &st;
    st.argc = 0;
    p_st->argc = 10;

    return 0;
}
