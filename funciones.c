#include "funciones.h"

void scan_polinomio(polino a){
  
}



void orden_polinomio(polino *lista){
  void ordenpoli(polino *lista){
	int numelementos,i,j, na;
	polino *cabeza,*inicio,*temp1,*temp2,*sig;
	int cambio ,aux;
	
	cabeza=lista;
	numelementos=na;
	
	}
	for (i=1;i<numelementos;i++) {
		inicio=cabeza;
		sig=inicio;
		cambio=0;
		for (j = 1; j <= numelementos-i; j++) {
			inicio=sig;
			if (inicio->siguiente->exponente>inicio->exponente) {
				cambio=1;
				aux=inicio->exponente;
				inicio->exponente=inicio->siguiente->exponente;
				inicio->siguiente->exponente=aux;
				aux=inicio->coeficiente;
				inicio->coeficiente=inicio->siguiente->coeficiente;
				inicio->siguiente->coeficiente=aux;
			}
			sig=sig->siguiente;
		}
		if (cambio==0)
			break;
	}
}
  return *lista;
}

void suma(polino *a, polino *b){
	
}

void dividir(polino *a,polino *b, polino *cociente){

	polino *header_b, *header_d, *header_c  *header_a, *Headerb_prima; 	
	polino *b_prima,*d,*apuntador;
	struct nomio factor;
	int resultado;
	int i,na,nb,nd;

		while (numerador->siguiente!=NULL) {
			while (denominador->siguiente!=NULL) {
				resultado=compara(a,b);
				if (c==1) {
					if (numerador->exponente>=denominador->exponente) {
						cociente=(polino*)malloc(sizeof(polino));
						cociente->coeficiente=numerador->coeficiente/denominador->coeficiente;
						cociente->exponente=numerador->exponente-denominador->exponente;
						sustraendo=multiplicar(cociente,denominador,sustraendo);
						residuo=restar(numerador,sustraendo,residuo);
						resultado=compara(residuo,denominador,resultado);
						if (resultado==1) {
							numerador=residuo;
						}
						else{
							printf("Resultado de la division\n");
							c=cociente;
						
						}
					}	
				}
			}
		}
	}
  return c;
}



void multiplicar(polino *a ,polino *b,polino *c){
  
}
void restar(polino *a, polino *b ,polino *c){
  
}
void compara(polino *a,polino *b ){

}
void division_sintetica(polino *a, polino *b){
  
}
void menu(){
  
}
polino print_polinomio(polino a, polino b){
  
  
}

