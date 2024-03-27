#include <stdio.h>

int main(int argc, char *argv[]) {
	//do while meter numeros negativos y sumarlos,fin al ingresar positivo
	int i,suma;
	suma=0;
	do{
		printf("Ingresa un valor negativo\n");
		scanf("%d", &i);
		if (i<0){
			suma=suma+i;
		}
	} while(i<0);
	printf("\nLa suma es = %d", suma);
	return 0;
}

