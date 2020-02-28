#indef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "String.h"


typedef struct nodob{string beta;
nodob *sig
}nodoe;

typedefe nodoe *listring

typedef struct NodoA{expresión info;
nodoa *sig;
}nodo;

typedef nodo *lista;

void crear(lista &l);
void destruir(lista &l);
int LargoIter (Lista L)
int Miniter (lista l);
int MaximoIter (lista l);
boolean PerteneceRecu (lista L, expresion e);
void agregar_expresion(lista &l, expresion e);



void crear_listring(listring &l);
void destruir_listring(listring &l);
int LargoIter_listring (listring L);
int Miniter_listring (listring l);
int MaximoIter_listring (listring l);

#endif //LISTA_H_INCLUDED

