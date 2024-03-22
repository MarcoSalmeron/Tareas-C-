#include <stdio.h>

int main(int argc, char *argv[]) {
	//Definir cuantos valores se usaran
	int v,p,n,s;
	v=1;
	n=0;
	p=0;
	s=0;
	
	//Ciclo del 1 al 10
	do {
		printf ("%d\n\n",v);
	
		v++;
		//sumar cuantos pares hay en el ciclo
		if (v % 2 ==0){
	printf ("Este valor se usara para el promedio");
			s=s+v;
			n++;
		}
	} while(v<=10);
	
	//verificar el numero de pares y promediar
	printf("\nEl numero de pares es = %d ",n);
	p=s/n;
	printf("\nEl promedio entre los pares es = %d ",p);
	return 0;
}

