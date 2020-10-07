/*
Implementeer int strcmp_own(char *s, char *t) van <string.h> zelf. 
Geef het getal 0 terug indien strings gelijk zijn, 
een getal kleiner dan 0 (bvb. -1) indien s < t en 
een getal groter dan 0 (bvb. 1) indien s > t. 
Gebruik je pointer kennis om snel het geheugen te scannen.
 */

#include <iostream>
#include <stdlib.h>

int strcmp_own(char *s, char *t)
{
    while (*s){
        if (*s != *t)
            break;
        s++;
        t++;
    }
    return *(const unsigned char*)s - *(const unsigned char*)t;
}

int main() {
    char *zin1="helleuh";
    char *zin2="joehoe";
    printf("zincheck verschil van: %d \n",(strcmp_own(zin1, zin2)));
    return 0;
}
