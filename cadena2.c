#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios(char *cadena,char *cadenasin);
int main(){
	int tam;
	char *cad,*cadsin;
	char letra;
	printf("Indique el tamaño de la cadena:");
	scanf("%d",&tam);	
	cad=(char*)malloc(tam*sizeof(char));
	cadsin=(char*)malloc(tam*sizeof(char));

	while(letra=getchar()!='\n');
	printf("Introduce la cadena:");
	fgets(cad,tam,stdin);
	
	quitaespacios(cad,cadsin);
	printf("La cadena sin espacios es %s\n",cadsin);	
	
	free(cad);
	free(cadsin);
	return 0;
}

void quitaespacios(char *cadena,char *cadenasin){
	int i,j;
	i=0;
	j=0;

	while(*(cadena+i)!='\0'){
		if(*(cadena+i)!=' '){
			*(cadenasin+j)=*(cadena+i);
			j++;
		}
		i++;
	}		
}
