#include "../headers/menu.h"

// affiche un menu qui propose un choix d'action � l'utilisateur
int afficherMenu () {
  int choix;


printf("                  Groupe 5                    \n");
printf("**********************************************\n");

    printf("\nMenu :\nSaisissez une tache \x85 effectuer.\n");
    printf("0  - Pour quitter ce programme.\n");
    printf("1  - Voulez vous les donnees du fichier CSV?\n");
    printf("2  - Voulez vous les donnees dans l'ordre croissant du temps?\n");
    printf("3  - Voulez les donnees dans l'ordre decroissant du temps?\n");
    printf("4  - Voulez les donnees dans l'ordre croissant du pouls?\n");
    printf("5  - Voulez les donnees dans l'ordre decroissant du pouls?\n");
    printf("6  - Rechercher et afficher le pouls d'un temps donn\x82?\n");
    printf("7  - Voulez la moyenne de pouls pour une plage de temps donn\x82?\n");
    printf("8  - Afficher le nombre de lignes de donnees en m\x82moire?\n");
    printf("9  - Rechercher et afficher les max et min du pouls avec leur temps associ\x82?\n");

    scanf("%i", &choix);


  printf("\n");
  return choix;
}

// declenche un action selon le choix de l'utilisateur
void tacheChoisie(int choix, Bpm *tab, int compteur) {
  switch (choix) {
  case 1:
    afficherDonneesOrdreCSV(tab, compteur);
    break;
  case 2:
    afficherDonneesTempsCrois(tab, compteur);
    break;
  case 3:
    afficherDonneesTempsDecrois(tab, compteur);
    break;
  case 4:
    afficherDonneesPoulsCrois(tab, compteur);
    break;
  case 5:
    afficherDonneesPoulsDecrois(tab, compteur);
    break;
  case 6:
    afficherPoulsTempsDonne(tab, compteur);
    break;
  case 7:
    afficherMoyPoulsPlageTemps(tab, compteur);
    break;
  case 8:
    afficherNbrLignes(compteur);
    break;
  case 9:
    afficherMaxMin(tab, compteur);
    break;
  case 10:
    afficherMediane(tab, compteur);
    break;
  default:
    printf("La valeur saisie ne correspond \x85 aucune tache...");
    break;
  }
}
