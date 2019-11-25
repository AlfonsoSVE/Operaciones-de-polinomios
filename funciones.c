#include "funciones.h"

void scan_polinomio(polino a){
  
}



void orden_polinomio(polino *lista){
  void ordenpoli(polino *lista){
	int numele,i,j;
	polino *cabeza,*inicio,*temp1,*temp2,*sig;
	int bandera,aux;

	cabeza=lista;
	numele=0;
	while (lista->siguiente!=NULL) {
		numele+=1;
		lista=lista->siguiente;
	}
	for (i=1;i<numele;i++) {
		inicio=cabeza;
		sig=inicio;
		bandera=0;
		for (j = 1; j <= numele-i; j++) {
			inicio=sig;
			if (inicio->siguiente->exponente>inicio->exponente) {
				bandera=1;
				aux=inicio->exponente;
				inicio->exponente=inicio->siguiente->exponente;
				inicio->siguiente->exponente=aux;
				aux=inicio->coeficiente;
				inicio->coeficiente=inicio->siguiente->coeficiente;
				inicio->siguiente->coeficiente=aux;
			}
			sig=sig->siguiente;
		}
		if (bandera==0)
			break;
	}
}
  return *lista;
}

void suma(polino *a, polino *b){
	
}

void dividir(polino *a,polino *b, polino *c){

polino *cociente,*sustraendo,*residuo,*c;
int resultado;

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

