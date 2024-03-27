#include <stdio.h>

int main(int argc, char *argv[]) {
	//con while ingresar 5 numeros, sumar impares y multiplicar pares
	int contador,i,sumaimpar,pares;
	
	contador=1;
	sumaimpar=0;
	pares=1;
	
	while (contador<=5){
		printf("Ingresa un valor (%d)\n",contador);
		scanf("%d", &i);
		if (i % 2 == 0){
			pares=pares*i;
		} else if (i % 2 != 0){
			sumaimpar=sumaimpar+i;
		}
		contador++;
	}	
	printf("La suma de impares es = %d\n", sumaimpar);
	printf("La multiplicacion de pares es = %d", pares);
	return 0;
}

