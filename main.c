#include "exercice_e.h"


int main()
{
    /* Compte le nombre de e */
    /*
    char cTexte[TEXT_MAX_SIZE];
    char cNewText[TEXT_MAX_SIZE];

    printf("Entrez un texte \n");
    fgets(cTexte,sizeof(cTexte),stdin);
    printf("Votre texte est : %s\n",cTexte);

    int nCountE = CountE(cTexte);
    printf("Il y a %d e dans votre texte\n",nCountE);
    */

    /*Enl�ve les e */
    /*
    RemoveE(cTexte,cNewText);
    printf("Sans les e : %s\n",cNewText);
    */

    /* Affiche � l'envers */
    /*
    char cNew[MOT_MAX_SIZE] = "Exemple de texte renverse";
    Reverse(cNew);
    */

    /* Conjugue */
    char cVerbe[] = "";
    scanf("%s",cVerbe);
    Conjugue(cVerbe);

    return 0;
}
