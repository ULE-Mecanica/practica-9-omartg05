/*Realizar un programa que me pida 2 cadenas por teclado, decir el tamaño que tienen las 2 cadenas. Si las 2 cadenas son de igual tamaño, compararlas y hacer que sean iguales. Si ya son iguales, finalizar el programa.Si son de distinto tamaño que la copie directamente*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int tam,tam1,tam2;
	char letra,*cad1,*cad2;

	printf("Tamaño máximo de las cadenas:");
	scanf("%d",&tam);
	cad1=(char*)malloc(tam*sizeof(char));
	cad2=(char*)malloc(tam*sizeof(char));

	while(letra=getchar()!='\n');
		printf("Introduce una cadena:");
		fgets(cad1,tam,stdin);
		printf("Introduce otra cadena:");
		fgets(cad2,tam,stdin);
	
	tam1=strlen(cad1)-1;
	tam2=strlen(cad2)-1;
	printf("El tamaño de la cadena 1 es %d\n",tam1);
	printf("El tamaño de la cadena 2 es %d\n",tam2);
	
	if(tam1!=tam2){
		printf("%s\n",strcat(cad1,cad2));
	}else{
		if(strcmp(cad1,cad2)==0){
			printf("Son iguales\n");

		}else{
			printf("No son iguales\n");
			strcpy(cad1,cad2);
			printf("Ahora son iguales %s\n",strcat(cad1,cad2));
		}
	}

	free(cad1);
	free(cad2);
	return 0;
}
