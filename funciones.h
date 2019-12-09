#ifdef 	FUNCIONES_H
#define FUNCIONES_H


#include "polinomios.h"

void scan_polinomio(polino *a);
void orden_poliniomio(polino *lista);
void suma(polino *a, polino *b);
void dividir(polino *a,polino *b, polino *c);
void scan_monomio(int a);
void division_sintetica(polino *a, int b, polino *c);
void multiplicar(polino *a ,polino *b,polino *c);
void restar(polino *a, polino *b ,polino *c);
void menu();
void print_polinomio(polino *a);
int cuenta(polino *a);
void borrar_polino(polino *a);
//FILE crear_archivo(polino *a);
//FILE guardar_archivo(polino *a);
//FILE abrir_archivo(polino *polinomios);


#endif
