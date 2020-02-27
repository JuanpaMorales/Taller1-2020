#include "string.h"

const int MAX = 1000; 
typedef char * string;


void strcrear (string & s) { 
	s = new char[1]; 
	s[0] = '\0'; 
	}

 

int strlar (string s) { 
	int i=0;       
	while (s[i] != '\0')  
		i++; 
	return i; 
	}

void strcop (string &s1,string s2) { 
	int i = 0; 
	int largo = strlar(s2)+1;       
	delete [] s1; s1 = new char[largo];    
	while (s2[i] != '\0') {       
		s1[i] = s2[i]; i++; 
			} 
	s1[i] = '\0'; 
		} 

void scan (string &s) { 
	string aux = new char[MAX]; 
	int i=0; 
	char c; 
	scanf ("%c", &c); 
	while ((c!= '\n' && i< MAX-1) {       
		aux[i] = c;       
		i++; 
		scanf ("%c", &c); 
		} 
	aux[i] = '\0';     
	strcop (s,aux); 
	strdestruir (aux); 
	}


void print (string s) { 
	int i=0; 
	while(s[i]!= '\0') { 
		printf ("%c", s[i]); 
		i++;   
			} 
	}



boolean streq(string s1,string s2) {    
	int i=0;
	boolean iguales = TRUE; 
	while (iguales && (s1[i] != '\0') && (s2[i] != '\0')) {     
		if (s1[i] != s2[i])            
			iguales = FALSE;     
			i++; 
		}    
	if ((s1[i] != '\0') || (s2[i] != '\0'))          
	iguales = FALSE; 
	return iguales; 
	}

void guardar_string(string d, string &e){
    
    int i = 0;
    strcrear(e);
    strlar(d);
    e= new char [strlar(d)];
    while(d[i]!=' '){
        e[i]=d[i];
        i++;
        } 
    
}

