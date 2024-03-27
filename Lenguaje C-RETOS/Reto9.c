#include <stdio.h>

int main(int argc, char *argv[]) {
	//3 calificaciones, promedio9=felicidades,8=buen alumno,7=esfuerzate,6=reprobado
	//cual calf es mas alta, y si son iguales o nulas
	float matematicas,biologia,historia,suma,promedio;
	matematicas=10;
	biologia=8;
	historia=5;
	
	suma=matematicas+biologia+historia;
	promedio=suma/3;
	printf("Promedio de = %.1f\n", promedio);
	if (promedio>9){
		printf("Felicidades!!");
	}else if (promedio>8){
		printf("Buen alumno!!");
	}else if (promedio>7){
		printf("Esfuerzate!!");
	}else if (promedio<7){
		printf("Reprobado...");
	}
if (matematicas>biologia && matematicas>historia){
	printf("\nTu nota mas alta fue en matematicas");
	}else if (biologia>matematicas && biologia>historia){
		printf("\nTu nota mas alta fue en biologia");
	}else if (historia>matematicas && historia>biologia){
		printf("\nTu nota mas alta fue en historia");
	}else if (matematicas ==0 && biologia ==0 && historia ==0){
		printf("\nTienes que mejorar bastante");
	}else if (matematicas == biologia && matematicas == historia){
		printf("\nLas calificaciones son iguales");
	}
	return 0;
}

