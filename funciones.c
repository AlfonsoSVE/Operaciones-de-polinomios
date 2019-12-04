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

	polino *header_a, *header_d, *header_c , *header_b, *Headera_prima; 	
	polino *a_prima,*d,*apuntador;
	struct nomio factor;
	int resultado;
	int i,na,nb,nd, b_fin;
	header_a=a;
	header_b=b;
	na=cuenta(a);
	nb=cuenta(b);
	header_c=(polino*)malloc(sizeof(polino));
	cociente=header_c;
	for (i = 0; i < na; i++) {
		cociente->siguiente=(polino*)malloc(sizeof(polino));
		cociente=cociente->siguiente;
	}
	Headera_prima=(polino*)malloc(sizeof(polino));
	a_prima=Headera_prima;
	for (i = 0; i < nd; i++) {
		a_prima->siguiente=(polino*)malloc(sizeof(polino));
		a_prima=a_prima->siguiente;
	}
	header_d=(polino*)malloc(sizeof(polino));
	d=header_d;
	if (na>nb) {
		nd=na;
	}else
		nd=nb;
	for (i = 0; i < nd; i++) {
		d->siguiente=(polino*)malloc(sizeof(polino));
		d=d->siguiente;
	}
  	cociente=header_c;
	resultado=1;
	While(resultado==1){
		resultado=0;
		b_fin=0;
		while ((a->siguiente!=NULL) && (b_fin==0)) {
			if (a->coeficiente!=0) {
				while ((b->siguiente!=0) && (b_fin==0)) {
					if (b->coeficiente!=0) {
						if (a->exponente>b->exponente) {
							resultado=1;
							b_fin=1;
						}
						else {
							if (a->exponente==b->exponente) {
								if (a->coeficiente>=b->coeficiente)
									resultado=1;
								b_fin=1;
							}
							else
								b_fin=1;
						}
					}
					b=b->siguiente;
				}
			}
			else
				a=a->siguiente;
		}
		while ((a->coeficiente==0) && (a->siguiente!=NULL)) {
			a=a->siguiente;
		}
		cociente->coeficiente=a->coeficiente/b->coeficiente;
		cociente->exponente=a->exponente-b->exponente;
		factor.coeficiente=cociente->coeficiente;
		factor.exponente=cociente->exponente;
		cociente=cociente->siguiente;
		a_prima=Headera_prima;
		while (denominador->siguiente!=NULL) {
			a_prima->coeficiente=factor.coeficiente*b->coeficiente;
			a_prima->exponente=factor.exponente+b->exponente;
			a_prima=a_prima->siguiente;
			b=b->siguiente;
		}
		d=header_d;
		restar(a,a_prima, d);
		a=d;
	}
	return header_d, header_c; 
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
polino print_polinomio(polino *a)
{
 	while (a->siguiente!=NULL) {
		if (a->coeficiente!=0)
			printf("%.2f x %d\n",a->coeficiente,a->exponente);
		a=a->siguiente;
	}
  
}

