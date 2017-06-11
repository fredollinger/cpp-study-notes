#include <stdio.h>  // printf

int main()
{
    const char *string0 = "1234567891011121314151617181920";
    printf("sizeof: [%s] is [%i] \n", string0, sizeof(string0));

    const char *string1 = "1";
    printf("sizeof: [%s] is [%i] \n", string1, sizeof(string1));

    return 0;
}
