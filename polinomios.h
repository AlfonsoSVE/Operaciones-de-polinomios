#ifndef POLINOMIOS_H
#define POLINOMIOS_H
#include <stdio.h>
typedef struct polinomios polino;

struct polinomios{
	float coeficiente;
	int exponente;
	polino *siguiente;
};
typedef struct _nomio nomio;
struct nomio{
	float coeficiente;
	int exponente;
};

struct Polinomio
{
   float *p;
   int grado;
};

#endif
