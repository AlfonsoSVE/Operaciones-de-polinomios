#include "funciones.h"

void scan_polinomio(polino a, polino b){
  
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
		if (bandera=0)
			break;
	}
}
  return *lista;
}



void dividir(polino *numerador,polino *denominador){

polino *cociente,*sustraendo,*residuo,*apuntanum;
int resultado;

	while (numerador->siguiente!=NULL) {
		while (denominador->siguiente!=NULL) {
			compara(numerador,denominador,resultado);
			if (resultado==1) {
				if (numerador->exponente>=denominador->exponente) {
					cociente=malloc(sizeof(polino));
					cociente->coeficiente=numerador->coeficiente/denominador->coeficiente;
					cociente->exponente=numerador->exponente-denominador->exponente;
					multiplicar(cociente,denominador,sustraendo);
					restar(numerador,sustraendo,residuo);
					compara(residuo,denominador,resultado);
					if (resultado==1) {
						numerador=residuo;
					}
					else{
						printf("Resultado de la division\n");
						apuntanum=cociente;
           
					}
				}
			}
		}
	}
}
  return apuntanum;
}



void multiplicar(polino *multiplicando ,polino *multiplicador,polino *producto){
  
}
void restar(polino *minuendo, polino *sustraendo ,polino *diferencia){
  
}
void compara(polino *polinomio1,polino *polinomio2 ){

}
void division_sintetica(polino *monomio, polino *polinomio){
  
}
void menu(){
  
}
polino print_polinomio(polino a, polino b){
  
  
}

