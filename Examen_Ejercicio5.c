#include <stdio.h>

int main(int argc, char *argv[]) {
	//sumar arreglo, par=ordenar asendente impar=desendente
	int suma,i,j,aux;
	int arreglo[5]={23,4,1,44,55};
	suma=0;
	for(i=0;i<5;i++){
		//printf("%d  ", arreglo[i]);
		suma=suma+arreglo[i];
	}
	if(suma % 2 == 0){
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arreglo[j] > arreglo[j+1]){
				       aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
			 arreglo[j+1]  = aux;
			}
		}
	}
	}else{
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(arreglo[j] < arreglo[j+1]){
					aux = arreglo[j];
					arreglo[j] = arreglo[j+1];
					arreglo[j+1]  = aux;
				}
			}
		}
	}
for(i=0;i<5;i++){
		printf("%d ", arreglo[i]);
	}
	return 0;
}

