#include "funciones.h"

void scan_polinomio(polino a){
  
}


int cuenta(polino *a){
	int total;
	while(a->siguiente!=NULL){
		total++;
		a=a->siguiente;
	}
	return total;
}
	
void orden_polinomio(polino *lista){
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
struct Polinomio
{
   float *p;
   int grado;
}; //no se si este en este proyecto vaya hasta ariiba lo de las struct 
	struct Polinomio suma(struct Polinomio* a, struct Polinomio* b)
	 
{
   int i;
   struct Polinomio s;
  
   s.grado = a->grado;
   if( b->grado > a->grado ) s.grado = b->grado; //hace una comparacion 
   
   s.p = malloc( (s.grado+1) * sizeof *s.p ); //crea espacio de memoria 

   for(i = 0; i <= a->grado; i++) // cuando a sea mayor o igual se le va agregando uno 
      s.p[i] = a->p[i]; //lo almacena en i 
   for(i = 0; i <= b->grado; i++)// lo mismo que el anterior 
      s.p[i] += b->p[i]; //lo almacena en i

   return s; //retorna el valor de la total de la suma 
}

void muestra_polinomio(struct Polinomio* pol )
{
   int i;
   int x;
   printf("El grado del polinomio es %d\n", pol->grado );
   printf("Los coeficientes correspondientes a los grados de 0 termino independiente  hasta %d, respectivamente son:\n", pol->grado);
   for( i = 0; i < pol->grado; i++ ) //va aumentando del 0 hasta el valor que puso el usuario
      printf("%4.2f, ", pol->p[i] ); // lo va imprimiento como va saliendo 
   printf("%4.2f" , pol->p[i] );
   putchar('\n');
}
	
}

void dividir(polino *a,polino *b, polino *cociente){

	polino *header_a, *header_d, *header_c , *header_b, *Headera_prima; 	
	polino *a_prima,*d,*apuntador;
	nomio factor;
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
	cociente=header_c;
	d=header_d;
	while (d->siguiente!=NULL) {
		if (d->coeficiente!=0)
			printf("El residuo es %.2f x %d\n",d->coeficiente,d->exponente);
		d=d->siguiente;
	}
	return cociente; 
}

void multiplicar(polino *a ,polino *b,polino *c){
  
}
void restar(polino *a, polino *b ,polino *c){
// para hacer la resta ocupe la misma estructura de la suma digan como le hacemos en esta parte {
   int i;
   struct Polinomio r;
  
   r.grado = a->grado;
   if( b->grado > a->grado ) r.grado = b->grado;
   
   r.p = malloc( (r.grado+1) * sizeof *r.p );

   for(i = 0; i <= a->grado; i++)
      r.p[i] = a->p[i];
   for(i = 0; i <= b->grado; i++)
      r.p[i] -= b->p[i];
      
       
          
    
      
   return  r;
}
}
void compara(polino *a,polino *b ){

}
void division_sintetica(polino *a, polino *b){
  
}
void menu(){
	printf(" 1 es leer un polinomio\n 2 es sumar polinomios\n 3 es restar polinomios\n 4 es multiplicar polinomios\n 5 es division sintetica\n 6 es division entre polinomios\n 7 es imprimir un polinomio\n 8 es guardar polinomios\n 9 es el historial de tus polinomios\n 10 es salir del programa\n");
  
}
polino print_polinomio(polino *a)
{
 	while (a->siguiente!=NULL) {
		if (a->coeficiente!=0)
			printf("%.2f x %d\n",a->coeficiente,a->exponente);
		a=a->siguiente;
	}
  
}

