#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Definir valores
	int V1,V2,V3;
	
	//Pedir valores
	printf("Hola, hoy vamos a comparar 3 valores, listo?\n");
	scanf("%i", &V1);
	scanf("%i", &V2);
	scanf("%i", &V3);
	
	//Comparar
	if (V1>V2 && V1>V3) {
		printf("El primer valor es mayor = %i",V1);
	}
	
	else if (V2>V1 && V2>V3) {
		printf("El segundo valor es mayor = %i",V2);
		
	}
	else if (V3>V1 && V3>V2){
		printf("El tercer valor es mayor = %i",V3);
		
	}
	else {
		printf ("Los numeros son iguales");
	}
	
	
	
	return 0;
}

