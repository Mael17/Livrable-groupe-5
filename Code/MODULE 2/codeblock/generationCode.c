#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"


int ChoixAllumage(int choix)
{

 FILE *fichier = NULL;
  fichier = fopen("param.h", "w");
  if (fichier != NULL)
  {
    if (choix > 0 && choix < 7)
    {
      fprintf(fichier, "#define choixParam %d\n", choix);
      fprintf(fichier, "#define pinLed 0");
      fclose(fichier);
    }
    else if (choix == 5)
    {
      int y;
      printf("Quelle LED souhaitez-vous allumer ? (1-10)\n");
      scanf("%d", &y);
      fprintf(fichier, "#define choixParam %d\n", choix);
      fprintf(fichier, "#define pinLed %d\n", y - 1);
      fclose(fichier);
    }
  }

switch(choix){

case 1:
    printf("televersez le programme");
    system("start battement_coeur\\battement_coeur.ino");
    break;
case 2:
    printf("televersez le programme");
    system("start chenille\\chenille.ino");
    break;
case 3:
printf("televersez le programme");
    system("start 1_LED_sur_2\\1_LED_sur_2.ino");
    break;
case 4:
    system("start 1_LED_sur_3\\1_LED_sur_3.ino");
    break;
case 5:
    printf("televerser le programme");
    system("start Hasard\\Hasard.ino");
    printf("\n");

    break;
default:
    printf("Nous ne connaissons pas votre choix");
    }

}
