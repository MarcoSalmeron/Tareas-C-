#include <stdio.h>
int ciclo (int fin, int impar){
	impar = 0;
	for (int i=1;i<=fin;i++){
		printf("%d ",i);
		if (i % 2 != 0){
			impar = impar + i;
		}
	}
	return impar;
}
int main(int argc, char *argv[]) {
	//pedir un numero para terminar un ciclo y sumar los impares
	int fin,impares,impar;
	printf("Creare un ciclo, en que numero termino?\n");
	scanf("%d", &fin);
	impares = ciclo(fin, impar);
	printf("La suma de impares es = %d", impares);
	return 0;
}

