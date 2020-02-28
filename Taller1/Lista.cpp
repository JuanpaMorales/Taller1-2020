#include "Lista.h"



void destruir_listring(listring &l){
	
	if(l==NULL)
		printf("lista vacia");
	
	else{

		nodo *alfa;
		while(l->sig!=NULL){
			alfa=l->sig;
			delete l;
			l->sig=alfa;
					}
			
			}




void crear_listring(lista &l){
l=null;
	}


int LargoIter_listring (Lista L) {    
	int cant = 0; 
	while (L != NULL){        
		cant++;        
		L = L->sig;
		    }    
	return cant; 
	}
 /* Este devuelve el largo de la lista, tanto que nos quemabamos */




int MaximoIter_listring (Lista L) {    
	int max = L->info; 
	while (L->sig != NULL){ 
	       if (L->sig->info > max)         
			max = L->sig->info;        
		L = L->sig;    
		}    
	return max; 
}


int Miniter_listring (Lista L) {    
	int min = L->info; 
	while (L->sig != NULL){ 
	       if (L->sig->info < max)         
			max = L->sig->info;        
		L = L->sig;    
		}    
	return min; 
}




boolean PerteneceRecu_listring (Lista L, int e) { 
	if (L == NULL)        
	return FALSE; 
	els eif (L->info == e)         
	return TRUE;     
	else         
	return PerteneceRecu(L->sig,e); 
	}











void crear(lista &l){
l=null;
	}


int LargoIter (Lista L) {    
	int cant = 0; 
	while (L != NULL){        
		cant++;        
		L = L->sig;
		    }    
	return cant; 
	}
 /* Este devuelve el largo de la lista, tanto que nos quemabamos */




int MaximoIter (Lista L) {    
	int max = L->info; 
	while (L->sig != NULL){ 
	       if (L->sig->info > max)         
			max = L->sig->info;        
		L = L->sig;    
		}    
	return max; 
}


int Miniter (Lista L) {    
	int min = L->info; 
	while (L->sig != NULL){ 
	       if (L->sig->info < max)         
			max = L->sig->info;        
		L = L->sig;    
		}    
	return min; 
}




boolean PerteneceRecu (Lista L, int e) { 
	if (L == NULL)        
	return FALSE; 
	els eif (L->info == e)         
	return TRUE;     
	else         
	return PerteneceRecu(L->sig,e); 
	}


void destruir(lista &l){
	
	if(l==NULL)
		printf("lista vacia");
	
	else{

		nodo *alfa;
		while(l->sig!=NULL){
			alfa=l->sig;
			delete l;
			l->sig=alfa;
					}
			
			}
	
}
