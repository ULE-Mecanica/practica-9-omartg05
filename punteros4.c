#include <stdio.h>
#include <stdlib.h>
void calculamedia(int num,int *vec);
int main(){
	int n,i;
	int *v;
	printf("Tamaño del vector:");
	scanf("%d",&n);
	v=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		scanf("%d",&*(v+i));
	}	
		
	calculamedia(n,v);
	free(v);
	return 0;
}

void calculamedia(int num, int *vec){
	int i,suma=0;
	float media;
	for(i=0;i<num;i++){
		suma=suma+*(vec+i);
	}
	media=suma/num;
	printf("La media es %f\n",media);
}
