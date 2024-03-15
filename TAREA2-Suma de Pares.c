#include <stdio.h>

int main(int argc, char *argv[]){
	//Definir Valores
	int I , V;
	I = 0;
	V = 0;	
	//iniciar ciclo
		while (I<=10){
			printf ("%d ",I);
			I++;
	//Separar pares
		if (I % 2 == 0){
			V = V + I;
		}
		}
		
	//suma de pares	
		printf ("La suma de los pares es = %d",V);
		
	
	return 0;
}

