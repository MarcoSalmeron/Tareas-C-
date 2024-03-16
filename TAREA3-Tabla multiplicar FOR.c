#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//definir valores
int nt,v,f;

	//pedir tabla de multiplicar
printf("Hola, cual tabla de multiplicar necesitas?\n");
scanf("%d",&v);
printf("La tabla del %d es:\n",v);

	//iniciar ciclo
for (nt = 1; nt<=10;nt++){
 
	printf("\n%d * %d = %d\n",v,nt, nt * v);
}
	return 0;
}

