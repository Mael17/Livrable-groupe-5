
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

//fonction menu
int affichermenu()
{
    printf("***************\n");
    printf("GROUPE 5 \n\n");
    printf("***************\n");
    printf("\n");
printf("Choisissez le type d'allumage\n");
printf(" 1-Toutes les LED allumees\n 2-allumage en chenille\n 3-allumage d'une LED sur deux\n 4-une LED sur trois\n 5-Allumage Hazard\n");
    int choix;
    scanf("%d",&choix);
    return choix;

}
