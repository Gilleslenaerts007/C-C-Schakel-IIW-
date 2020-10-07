//
// Created by Gille on 24/09/2020.
//

#ifndef LABO1_2_ORC_H
#define LABO1_2_ORC_H


typedef struct orc{
    int ID;
    int aanval;
    int levens;
}orcleger;


orcleger vecht(orcleger aanvaller, orcleger verdidger);

#endif //LABO1_2_ORC_H
