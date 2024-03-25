#include <stdio.h>

int main(int argc, char *argv[]) {
	float cal1,cal2,cal3,cal4,promedio,suma;
	
	cal1 =10;
	cal2 =9;
	cal3 =7;
	cal4 =5;
	suma=0;
	
	suma = cal1 + cal2 + cal3 + cal4;
	
	promedio=suma/4;
			  
	printf("%.1f \n", suma);
	printf("El promedio de las calificaciones es = %.1f", promedio);
	
	if (promedio>=9){
		printf("\nCalificacion A");
	}else if (promedio>=8){
		printf("\nCalificacion B");
	}else if (promedio>=7){
		printf("\nCalificacion C");
	}else if (promedio<7){
		printf("\nCalificacion F");
	}else if (promedio==0){
		printf("\nEl valor es nulo");
	}else {
		printf("Calificacion no valida");
	}
	return 0;
}

