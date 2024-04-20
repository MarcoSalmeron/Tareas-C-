#include <stdio.h>

int main(int argc, char *argv[]) {
	//pedir calificacion 90=A,80=B,70=C,60=D,50=F
	int calf;
	printf("Ingresar Calificacion del Examen\n");
	scanf("%d", &calf);
	if(calf >= 90){
		printf("A");
	}else if(calf >= 80){
		printf("B");
	}else if(calf >= 70){
		printf("C");
	}else if(calf >= 60){
		printf("D");
	}else{
		printf("F");
	}
	return 0;
}

