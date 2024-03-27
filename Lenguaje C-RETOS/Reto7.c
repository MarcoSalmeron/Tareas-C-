#include <stdio.h>

int main(int argc, char *argv[]) {
	//ciclo for de 10 a 15, sumar todo e indicar pares e impar
	int i,suma,pares,impar;
	pares=0;
	impar=0;
	suma=0;
	for (i=10;i<=15;i++){
		printf("%d  ", i);
		suma=suma+i;
	if(i % 2 == 0 ){
		pares++;
	}else if (i % 2 != 0){
		impar++;
	}
	}
	printf("\nNumero de pares = %d\n",pares);
	printf("Numero de impares = %d\n", impar);
	printf("La suma es = %d", suma);
	return 0;
}

