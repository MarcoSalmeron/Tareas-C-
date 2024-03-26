#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	//Crear cajero
	//1-Retirar dinero 2-Abonar dinero 3-Salir
	//Mostrar dinero
	
	int opc,Dinero,Retiro,Abono,movimientos;
	Dinero=3000;
	movimientos=0;
	do {
		printf("\n\n**MENU**\n");
		printf("Numero de movimientos = %d\n", movimientos);
		printf("Saldo actual = %d\n\n", Dinero);
		printf("1-Retirar Dinero\n");
		printf("2-Depositar\n");
		printf("3-Salir\n");
		scanf("%d", &opc);
		
	switch(opc){
	case 1:
		printf("¿Cuanto dinero deseas retirar?\n");
		scanf("%d", &Retiro);
		if (Retiro>Dinero){
			printf("\nSaldo Insuficiente");
			movimientos--;
			Dinero=Dinero+Retiro;
		}
		Dinero=Dinero-Retiro;
		movimientos++;
		//system("cls");
		break;
		
	case 2:
		printf("¿Cuanto deseas Depositar?\n");
		scanf("%d", &Abono);
		Dinero=Dinero+Abono;
		movimientos++;
		//system("cls");
		break;
		
	case 3:
		printf("Estas saliendo del menu...\n");
		break;
		
	default:
		printf("\nOpcion no valida\n");
	}
	}while(opc !=3);
	
	return 0;
}

