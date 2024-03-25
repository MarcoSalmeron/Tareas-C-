#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,b,c,suma,promedio;
	suma=0;
	promedio=0;
	c=0;
	
	printf("Ingrese dos numeros\n");
	scanf("%f%f", &a,&b);
	while(a<=b){
		c++;
		printf("%.1f ", a);
		suma=suma+a;
		a++;
	}
	//printf("\nLa suma del ciclo es = %.1f ", suma);
	promedio=suma/c;
	printf("\nEl promedio del ciclo es = %.1f",promedio);
	return 0;
}

