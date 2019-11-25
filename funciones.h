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
void dividir(polino *numerador,polino *denominador);
void multiplicar(polino *multiplicando ,polino *multiplicador,polino *producto);
void restar(polino *minuendo, polino *sustraendo ,polino *diferencia);
void compara(polino *polinomio1,polino *polinomio2 );
void division_sintetica(polino *monomio, polino *polinomio);
void menu();
void print_polinomio(polino a, polino b);

#endif
