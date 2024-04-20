#include <stdio.h>

int main(int argc, char *argv[]) {
	//solicitar 1 numero para terminar el ciclo
	int num;
	printf("Ingresa un numero entero positivo para terminar el ciclo\n");
	scanf("%d", &num);
	printf("\n");
	for(int i=1;i<=num;i++){
		printf("%d\n",i);
	}
	return 0;
}

