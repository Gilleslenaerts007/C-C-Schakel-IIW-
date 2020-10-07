//
// Created by Gille on 24/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "orc.h"

orcleger vecht(orcleger aanvaller, orcleger verdidger){
    if ( verdidger.levens < aanvaller.aanval) {
        printf("Orc aanvaller %d wint van orc verdediger %d\n", aanvaller.ID, verdidger.ID);
    }
    else
    {
        aanvaller.levens = 0;
        printf("Orc verdediger %d wint van orc aanvaller %d\n", verdidger.ID, aanvaller.ID);
    }
}

