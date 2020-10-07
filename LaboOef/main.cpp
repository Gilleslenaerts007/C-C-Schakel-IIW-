/*
 * Het is oorlog! De orcs vallen aan en zien er hongerig uit! Ze eten al je klinkers op!
 * Schrijf een programma dat de functie char* omnom(char zin[]) implementeert en alle klinkers
 * uit een zin haalt (of ze verdoezelt met een X). Je moet ook een main() functie schrijven die
 * de gebruiker een zin laat ingeven en het resultaat afdrukt op het scherm. (Tip: scanf of fgets, rara?)
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>

#define maxsize 60

char* omnom(char zin[])
{
    char* response = (char*) malloc(sizeof(char)* strlen(zin));
    strcpy(response, zin);

    for(int i=0; i < strlen(response); i++)
    {
        switch(response[i])
        {
            case 'a' : response[i] = 'X';
                        break;
            case 'e' : response[i] = 'X';
                break;
            case 'i' : response[i] = 'X';
                break;
            case 'o' : response[i] = 'X';
                break;
            case 'u' : response[i] = 'X';
                break;
        }
        //printf("%c", response[i]);
    }
    return response;
}

int main() {
    char *zininput=(char*) malloc(sizeof(maxsize));
    std::cout << "Enter sentence" << std::endl;
    //fgets(zininput, maxsize, stdin); //kan ook
    scanf("%[^\n]", zininput);
    printf("filtered : %s \n", omnom(zininput));
    return 0;
}
