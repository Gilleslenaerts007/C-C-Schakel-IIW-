/*
 * Jij bent een brave bibliothecaris. En als brave bibliothecaris is het je taak om boeken alfabetisch te
 * sorteren op achternaam. Laat de gebruiker een aantal achternamen ingeven, gescheiden door spatie
 * (tip: strtok, en druk dan gesorteerd de inventaris af. Uiteraard gebruik je pointers.
 * input: lenaerts zwanskop aerts groeneveld
 * output: aerts groeneveld lenaerts zwanskop
 */
#include <iostream>
#include <stdlib.h>
#include <string.h>

int strsort(char *s)
{
    printf("%s\n",s);
    while (*s != ' ') {
        if (*s == 'A' || *s == 'a')
        {
            break;
        }
     s++;
    }
    /*
    char * pch;
    char * pchold;
    char *sortednamen;
    pch = strtok(s," ,.-");
    while (pch != NULL)
    {
        printf("%s\n",pch);
        if (pch[0] > pchold[0])
        {
        }
        pch = strtok(NULL, " ,.-");
    }
     */
}

int main() {
    char *namen="lenaerts zwanskop aerts groeneveld";
    strsort(namen);
    //printf("zincheck verschil van: %d \n",(strcmp_own(zin1, zin2)));
    return 0;
}
