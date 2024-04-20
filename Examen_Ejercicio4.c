#include <stdio.h>
void esPar(int n1){
	if(n1 % 2 == 0){
		printf("Numero par Ingresado!!");
	}else{
		printf("Numero Impar Ingresado, Intentelo de Nuevo\n");
	}
}
int main(int argc, char *argv[]) {
	//solicitar numero en do while hasta que sea par,verificar con funcion
	int Numero;
	do{
		printf("Ingrese un valor\n");
		scanf("%d", &Numero);
		esPar(Numero);
	} while(Numero % 2 != 0);
	return 0;
}

