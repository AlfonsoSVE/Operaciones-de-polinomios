
typedef struct polinomios polino;

struct polinomios{
	float coeficiente;
	int exponente;
	polino *siguiente;
};

struct monomio{
	float coeficiente;
	int exponente;
};
