#include "exercice_e.h"

int CountE(char cTexte[TEXT_MAX_SIZE]) {
    int count = 0;
    int i=0;

    for (i=0;i<strlen(cTexte);i++) {
        if (cTexte[i] == 'e') {
            count++;
        }
    }

    return count;
}

void RemoveE(char cTexte[TEXT_MAX_SIZE],char cNewText[TEXT_MAX_SIZE]) {
    char *pch;
    char *c = "e";
    pch = strtok(cTexte,c);

    while (pch != NULL) {
        strcat(cNewText,pch);
        pch = strtok(NULL,c);
    }

}

void Reverse(char cTexte[MOT_MAX_SIZE]) {
    int i=0;

    for (i=strlen(cTexte)-1;i>=0;i--) {
        printf("%c",cTexte[i]);
    }

}

int IsAlphaText(char *cText) {
    int check = 1;
    int i =0;
    while(i<strlen(cText) && check) {
        if (!isalpha(cText[i])) {
            check = 0;
        }
        i++;
    }
    return check;

}

void Conjugue(char *cVerbe) {

    if (IsAlphaText(cVerbe)) {
        int len = strlen(cVerbe);
        char *cTerminaison = &cVerbe[len-2];

        if (strcmp(cTerminaison,"er") == 0) {
            char cMot[] = "";
            strcpy(cMot,cVerbe);
            cMot[strlen(cMot)-2] = '\0';
            printf("je %se\n",cMot);
            printf("tu %ses\n",cMot);
            printf("il/elle/on %se\n",cMot);
            printf("nous %sons\n",cMot);
            printf("vous %sez\n",cMot);
            printf("ils/elles %sent\n",cMot);
        }
    }
}
