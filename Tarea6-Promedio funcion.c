#include <stdio.h>
float promedio(float suma, float total){
	total = suma / 2;
	return total;
}

int main(int argc, char *argv[]) {
	//pedir nombre, dos valores y sacar promedio con funcion
	float v1,v2,suma,total;
	char nombre[10];
	suma=0;
	total=0;
	printf("Hola, como te llamas??\n");
	scanf("%s", &nombre);
	printf("Muy bien %s, sacaremos el promedio de dos valores...\n", nombre);
	scanf("%f %f", &v1, &v2);
	suma = v1 + v2;
	total = promedio(suma,total);
	printf("\nEl promedio de %.1f y %.1f es = %.1f", v1,v2,total);
	return 0;
}

