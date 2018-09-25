#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamanio,valor,total=0,suma=0;
	int fila=0;
	int columna =0;
	printf("ingrese tamaño la matriz(solo se permitiran matrizes cuadradas)\n");
	scanf("%d",&tamanio);
	int matriz [tamanio][tamanio];
	int boolean = 1;
	for(fila=0; fila<tamanio; fila++){
		for(columna=0; columna<tamanio; columna++){
			printf("ingrese el valor [ ");
			printf("%d",fila);
			printf(" ]\t");
			printf(" [");
			printf("%d",columna);
			printf("] ");
			scanf("%d",&valor);
			printf("\n");
			matriz[fila][columna]=valor;		
				}
			}
	
	for(fila=0;fila<tamanio;fila++){
	total=total+matriz[fila][0];
		
		}		
		printf("%d",total);
		printf(" \n");
		
		for(fila=0; fila<tamanio; fila++){
			for(columna=0; columna<tamanio; columna++){
			suma=suma+matriz[fila][columna];
			
			}
			if (suma!=total){
				boolean=0;
				}
			printf("%d",suma);
			
			printf(" \n");
			suma=0;
		}
	
		for(columna=0; columna<tamanio; columna++){
			for(fila=0; fila<tamanio; fila++){
			suma=suma+matriz[fila][columna];
			
			}
			if (suma!=total){
				boolean=0;
				}
			printf("%d",suma);
			printf(" \n");
			suma=0;
		
		}
		
		for(columna=0; columna<tamanio; columna++){
			for(fila=0; fila<tamanio; fila++){
				if(fila==columna){
				suma=suma+matriz[fila][columna];
				}
			
			}
			
	}
	printf("%d",suma);
			printf(" \n");
			suma=0;
		
		for(columna=0; columna<tamanio; columna++){
			for(fila=0; fila<tamanio; fila++){
				if(fila+columna==tamanio-1){
				suma=suma+matriz[fila][columna];
				}
			
			}
		
			
			
			
			
}			if (suma!=total){
				boolean=0;
				}
			printf("%d",suma);
			printf(" \n");
			suma=0;
	
	printf("%d",boolean);
	
	printf(" \n");
	
	if (boolean==1){
		printf("LAS MATRICES SON AMIGAS \n");
		}
		
		else{
		printf("LAS MATRICES NO SON AMIGAS \n");	
			}
	
}
