#include <stdio.h>

int main(int argc, char *argv[]) {
	//ciclo de 10 numeros
	//sumar pares negativos y sumar negativos
	//verificar ambas sumas y restar
	int v1,pares,negativos,total,numero;
	v1=1;
	pares=0;
	negativos=0;
	
	for (v1=1;v1<=10;v1++){
		printf("Agrega un valor (%d)\n", v1);
		scanf("%d",numero);
		if (numero<=0){
			negativos = negativos + numero;
		} else if (numero % 2 ==0){
			pares= pares + numero;
		}
	}
	printf("\nLa suma de pares es = %d\n", pares);
	printf("La suma de negativos es = %d\n", negativos);
	
	total=pares-negativos;
	printf("La resta total es = %d", total);
	return 0;
}

