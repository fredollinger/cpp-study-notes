#include <stdio.h> // printf

#define MAX_NUMBER_OF_STRINGS 10

struct strstruct {
    char argv[MAX_NUMBER_OF_STRINGS];
    int argc;
};

int main()
{
    struct strstruct st;
    struct strstruct *p_st = &st;
    st.argc = 10;
    printf("argc is [%i] \n", st.argc);
    p_st->argc = 20;
    printf("argc is [%i] \n", p_st->argc);

    return 0;
}
