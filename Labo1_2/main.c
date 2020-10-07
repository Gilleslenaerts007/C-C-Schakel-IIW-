/*
Laten we die smerige orcs eens modelleren. Vraag de gebruiker om een nummer.
Dat nummer is het aantal orcs dat in het leger zit. Maak zoveel orc struct instances
aan met een random waarde voor de eigenschappen. Druk dit af op het scherm.
Een orc heeft de volgende eigenschappen:
aanval
levens
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "orc.h"

#define maxsize 60

int main() {
    srand(time(NULL));
    //char *zininput=(char*) malloc(sizeof(maxsize));
    int legersize = 5;
    printf("geef een nummer wat het aantal orcs is in het leger");
    //fgets(legersize, maxsize, stdin); //kan ook
    //scanf("%d", &legersize);
    orcleger army1[legersize];
    for (int i = 0; i<legersize;i++){
        army1[i].ID = i;
        army1[i].aanval = rand() % 20;
        army1[i].levens = rand() % 20;
        printf("orc%d \n levens :  %d\n aanval : %d\n", i, army1[i].levens, army1[i].aanval);
    }
    while (legersize >= 2){
        for (int i = 0; i<legersize;i++){
            while(army1[i].levens >= 1)
            {
                for(int j = 1; j<legersize-i;j++) {
                    printf("aanvaller leven : %d\n", army1[i].levens);
                    vecht(army1[i], army1[i + j]);
                }
            }
            legersize--;
        }
    }

    return 0;
}
