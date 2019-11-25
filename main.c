#include <stdio.h>
#include 'funciones.h'

int main(){
  polino *head1,*head2,*res;
	int n1,n2,i,j,expo, op;
	float coef;


	n1=void scan_polinomio(polino a);
	n2=void scan_polinomio(polino a);
	void orden_poliniomio(polino *lista);
	do{
		menu();
		scanf("%d", &op);
		switch(op){
			case 1:
				res= suma(a, b);
				break;
			case 2:
				res=restar(a, b, c);
				break;
			case 3:
				res=multiplicar(a, b, c);
				break;
			case 4:
				res= dividir(a, b, c);
				break;
			case 5:
				res=division_sintetica(a, b);
				break;
			case 6:
				printf("Goodbye\n");
				break;
			default:
				printf("Opcion no valido\n");
		}
		print_polinomio(a)=res;
	}while(op<7);
