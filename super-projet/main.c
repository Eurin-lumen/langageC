#include <stdio.h>
#include <stdlib.h>

double main()
{
   // calcul entre variable
   int resultat = 0 , nombre1 = 0, nombre2 = 0;
   // on demande à l'utilisateur d'entrer les nombres 1 et 2
   printf("Entrez un nombre 1 : ");
   scanf("%d", &nombre1);
   printf("Entrez un nombre 2 : ");
   scanf("%d", &nombre2);
   // on fait  le calcule

   resultat = nombre1 + nombre2;

   // on affiche le resultat

   printf("%d + %d = %d\n", nombre1, nombre2, resultat);
    return 0;
}

