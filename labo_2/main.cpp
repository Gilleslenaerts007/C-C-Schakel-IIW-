#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int strcmp_own(char *s, char *t)
{
    printf("im in strcmp %c", *s);
    static int code = 0;
    code = 1;
    return 0;
}


int main() {
    char* s1 = "helleeuh";
    char* s2 = "joehoe";
    strcmp_own(s1, s2);
    return 0;
}
