#include <stdio.h>
void matriz(int columnas, int filas,int i){
	for(i=1;i<=columnas || i<=filas;i++){
		printf("+++\n");
	}
}
int main(int argc, char *argv[]) {
	//definir numero de columnas y filas y en funcion imprimirlas
	int columnas,filas,i;
	columnas=3;
	filas=3;	
	matriz(columnas,filas,i);
	return 0;
}

