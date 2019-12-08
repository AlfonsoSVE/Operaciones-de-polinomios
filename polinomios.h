
typedef struct polinomios polino;

struct polinomios{
	float coeficiente;
	int exponente;
	polino *siguiente;
};
typedef struct monomio nomio;
struct monomio{
	float coeficiente;
	int exponente;
};
struct Polinomio
{
   float *p;
   int grado;
};
void lee_polinomio(struct Polinomio* pol)
{
   int i;

   puts("Grado:"); fflush(stdout);
   scanf("%d",&pol->exponente);

   pol->p= malloc( (pol->exponente+1) * sizeof(float));

   for( i = 0; i <= pol->exponente; i++ )
   {
       printf("Introduzca el valor del coeficiente %d:\n",i);
       scanf("%f",&pol->p[i]);
   }     
}
void muestra_polinomios(struct polinomios* pol )
{
   int i;
   printf("El grado del polinomio es %d\n", pol->exponente );
printf("Los coeficientes correspondientes a los grados de 0 hasta %d, respectivamente son:\n", pol->exponente);
   for( i = 0; i < pol->exponente; i++ )
      printf("%4.2f, x^%i ", pol->p[i],i );
   printf("%4.2f", pol->p[i] );
   putchar('\n');
}
