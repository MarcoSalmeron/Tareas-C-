#include <stdio.h>

int main(int argc, char *argv[]) {
	int v,p,i,s,v2;
	v=1;
	s=0;
	v2=1;
	i=0;
	p=0;
	
	//Ciclo del 1 al 10
	do {
		printf ("%d ",v);
		s=s+v;
		v++;
		
	} while(v<=10);
	printf ("\nLa suma total es = %d",s);
	
	//Segundo ciclo del 1-20
	printf ("\n\n**SEGUNDO CICLO**\n\n");
	do {
		//separar impar
		printf ("%d ",v2);
		if (v2 % 2 != 0){
			i=i+v2;
			
		//separar pares	
		}else if (v2 % 2 ==0){
			p++;
		}
		v2++;
	} while(v2<=20);
	
	//Verificar operaciones
	printf ("\nEl numero de pares es = %d\n",p);
	printf ("\nLa suma de impares es = %d\n",i);
	return 0;
}

