
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
