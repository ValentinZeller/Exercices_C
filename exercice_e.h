#ifndef EXERCICE_E_H_INCLUDED
#define EXERCICE_E_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TEXT_MAX_SIZE 133
#define MOT_MAX_SIZE 30

extern int CountE(char cTexte[TEXT_MAX_SIZE]);
extern void RemoveE(char cTexte[TEXT_MAX_SIZE],char cNewText[TEXT_MAX_SIZE]);
extern void Reverse(char cTexte[MOT_MAX_SIZE]);
extern void Conjugue(char *cVerbe);

#endif // EXERCICE_E_H_INCLUDED
