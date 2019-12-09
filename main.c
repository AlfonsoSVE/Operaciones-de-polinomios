#include <stdio.h>
#include "funciones.h"

int main(){
  polino *heada,*headb,*res. *a, *b;
	int na,nb ,nc ,expo, op;
	float coef;

	do{
		//crear_archivo(a);
		menu();
		scanf("%d", &op);
		switch(op){
			case 1:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				break;
			case 2: 
				a=scan_polinomio(a);
				//guardar_archivo(a);
				b=scan_polinomio(a);
				//guardar_archivo(b);
				res= suma(a, b, c);
				//guardar_archivo(res);
				break;
			case 3:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				b=scan_polinomio(a);
				//guardar_archivo(b);
				res=restar(a, b, c);
				//guardar_archivo(res);
				break;
			case 4:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				b=scan_polinomio(a);
				//guardar_archivo(b);
				res=multiplicar(a, b, c);
				//guardar_archivo(res);
				break;
			case 5:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				b=scan_monomio(a);
				//guardar_archivo(b);
				res=division_sintetica(a, b, c);
				//guardar_archivo(res);
				break;
			case 6:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				b=scan_polinomio(a);
				//guardar_archivo(b);
				res= dividir(a, b, c);
				//guardar_archivo(res);
				break;
			case 7:
				a=scan_polinomio(a);
				//guardar_archivo(a);
				print_polinomio(a);
			case 8:
				a=scan_polinomio(a);
				guardar_archivo(a);
				break;
			case 9:
				//abrir_archivo(polinomios);
				break;
			case 10:
				printf("Goodbye\n");
				break;
			default:
				printf("Opcion no valido\n");
		}
		print_polinomio(a)=res;
		borrar_polino(res);
	}while(op<10);
	resturn 0;
}
