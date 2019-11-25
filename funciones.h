#ifdef 	FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include "polinomios.h"
struct polinomios{
	float coeficiente;
	int exponente;
	struct polinomios *siguiente;
};
typedef struct polinomios polino;

void scan_polinomio(polino a);
void orden_poliniomio(polino *lista);
void suma(polino *a, polino *b);
void dividir(polino *a,polino *b, polino *c);
void multiplicar(polino *a ,polino *b,polino *c);
void restar(polino *a, polino *b ,polino *c);
void compara(polino *a,polino *b );
void division_sintetica(polino *a, polino *b);
void menu();
void print_polinomio(polino a, polino b);

#endif
