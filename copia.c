#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main(){
	char cadena[TAM];
	int longitud;

	printf("Introduce una cadena de 100 caracteres maximo:");
	fgets(cadena,100,stdin);

	longitud=strlen(cadena)-1;
	printf("El tamaño de la cadena es %d\n",longitud);

	if(strcmp(cadena,"compara")==0){
		printf("Es igual que 'compara'\n");
	}
	else{
		printf("Es distinta que 'compara'\n");
	}
	
	printf("La cadena concatenada es %s\n",strcat(cadena,"añadida"));
	
	return 0;
}
