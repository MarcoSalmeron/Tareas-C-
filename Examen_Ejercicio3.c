#include <stdio.h>

int main(int argc, char *argv[]) {
	//menu switch con los dias de la semana
	int opc;
	
	do{
		printf("\n\n~~Dias de la semana~~\n");
		printf("Ingresar valor del 1-7\n");
		printf("8-Salir del menu\n");
		scanf("%d", &opc);
		
	switch(opc){
	case 1:
		printf("Lunes");
		break;
		
	case 2:
		printf("Martes");
		break;
		
	case 3:
		printf("Miercoles");
		break;
		
	case 4:
		printf("Jueves");
		break;
		
	case 5:
		printf("Viernes");
		break;
		
	case 6:
		printf("Sabado");
		break;
		
	case 7:
		printf("Domingo");
		break;
		
	case 8:
		printf("Saliendo...");
		break;
		
	default:
		printf("Dia de la semana no valido");
		break;
	}	
	} while(opc != 8);
	return 0;
}

