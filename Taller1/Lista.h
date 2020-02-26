#indef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "String.h"

typedef struct NodoA{expresión info;
nodoa *sig;
}nodo;
void crear(lista &l);
int LargoIter (Lista L)
int Miniter (lista l);
int MaximoIter (lista l);
boolean PerteneceRecu (lista L, expresion e);
void agregar_expresion(lista &l, expresion e);

#endif //LISTA_H_INCLUDED

