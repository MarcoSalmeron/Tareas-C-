#include <stdio.h>

int main(int argc, char *argv[]) {
	float gasolina,litro,metro,metros,total;
	
	metros=1500;
	gasolina=40;
	metro=0;
	total=0;
	printf("por cada 1500 metros gasto 40L de gasolina\n");
	printf("¿Cuanta gasolina gasto por metro?\n\n");
	
	metro=metros/gasolina;
	printf("Por cada metro gasto = %.1f L de gasolina\n\n", metro);
	
	printf("Cuanto usare por 2000 metros?\n");
	total=metro*2000;
	printf("Usaras %.1f", total);
	return 0;
}

