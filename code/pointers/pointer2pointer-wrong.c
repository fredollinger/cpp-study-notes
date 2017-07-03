#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()
#include <string.h>  // strncpy()

#define STRING1 "Friendship is magic.\0"
#define STRING2 "What the hay?\0"

void make_strings(char *str1, char *str2) {
    str1 = (char *) malloc(sizeof(char) * strlen(STRING1) + 1);
    strncpy(str1,STRING1, strlen(STRING1));

    str2 = (char *) malloc(sizeof(char) * strlen(STRING2) + 1);
    strncpy(str2,STRING2, strlen(STRING2));

    return;
}

int main()
{
    char *s1, *s2;
    make_strings(s1, s2);
    printf("string 1 [%s] string 2 [%s] \n", s1, s2);
    return 0;
}
