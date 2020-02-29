
#include "Parsing.h"


	nodo llamada;
	nodoe *salto;
	listring *beta;
	string s2;
	string s3;
	int i=0;
	int j=0;
	int h=0;



int parsing_numerico(string s, int h){
	
	crear(array arre, h);
				while(s2[h]!='\0'){
						switch(s2[h]){
							case '0':
								arre[h]=0;
							case '1':
								arre[h]=1;
							case '2':
								arre[h]=2;
							case '3':
								arre[h]=3;
							case '4':
								arre[h]=4;
							case '5':
								arre[h]=5;
							case '6':
								arre[h]=6;
							case '7':
								arre[h]=7;
							case '8':
								arre[h]=8;
							case '9':
								arre[h]=9;
								}			
						  h++;
							}
						  if(h==1)
						  int numero=arre[h];

						  else if(h=2)
						  int numero=(arre[h]*10) + (arre[h-1]);

						  else if(h=3)
						  int numero=(arre[h]*100) + (arre[h-1]*10) + (arre[h-2]);
						  
						  else if (h=4)
						  int numero=(arre[h]*1000) + (arre[h-1]*100) + (arre[h-2]*10) + (arre[h-3]);
						
				return numero;
							 

					}
	
	
	
	
	
	
void parsing_comando(string s){
	switch(s){
		case "sum":
				printf("sum");
		case "product":
				printf("product");
		case "create":
				printf("create");
		case "equals":
				printf("equals");
		case "show":
				printf("show");
		case "eval":
				printf("eval");
		case "save":
				printf("save");
		case "load":
				printf("load");
		case "quit":
				printf("quit")
		
		}
	}


bool parsing_expresion(string s){
		bool chequeo=true;
		int j = 1;
		parsing_numerico(s, j);
			
	if(parsing_numerico(s,j)>largoiter)
		bool=false;

		return chequeo;
		
		
											}
	
	
	





void parsing(string s1){
	


		Crear_listring(beta);
			

	while(s1[i]!='\0'){


		if(s1[i]=' '){
			strcrear(beta->str);
			beta->str= new char[h];
			h=0;
		
			while(s1[h]!=' '){
				beta->str[h]=s1[h];
				h++;
				}
				beta->str[h]='\0';
				

			
			h=0;
		
			}
			
			if (beta->str[0]>='0') &&(beta->str[0]<='9'){
						int i=0;
						parsing_numerico(beta->str, i);
				}
			
			else if(((beta->str[0][0]>='a')&&(beta->str[0][0]<='z')) || ((beta->str[0]>='A') && (beta->str[0]<='Z'){
							
						if((beta->str[0]='e')&&((beta->str[1]>='0') || (beta->str[1]<='9'))){

								parsing_expresion(beta->str);	
									if(parsing_expresion=false)
										printf("Expresion no existe");
									else
										salto=encontrar_expresion(beta->str, l);
							

									

						else if(((beta->str[0]>='a')&&(beta->str[0]<='z')) || ((beta->str>[0]='A') && (beta->str[0]<='Z'))){

								guardar_string(beta->str, s3);


										
							} 
		
			h=0;/*igualacion de h al final de todo el parsing*/		

			}
		}
	
	

		if(((s3[1]>='a')&&(s3[1]<='z')) || ((s3[1]>='A') && (s3[1]<='Z')))
				parsing_comando(s3);


		beta=beta->sig;
		i++;
		h++;
	
}

}



