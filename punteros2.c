#include <stdio.h>
#include <stdlib.h>
void inicializa(int *mat,int numf,int numc);
int main(){
	int i,j,nf,nc,sum=0;
	int *m;
	
	printf("Introduce numero de filas:");
	scanf("%d",&nf);
	printf("Introduce numero de columnas:");
	scanf("%d",&nc);
	
	m=(int*)malloc(nf*nc*sizeof(int));

	printf("Terminos de la matriz:\n");
	inicializa(m,nf,nc);
	printf("La matriz es:\n");	
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			printf("%4d",*(m+i*nf+j));
		}
		printf("\n");
	}
	
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			sum=sum+*(m+i*nf+j);
		}
	}
	
	
	printf("La suma de los terminos es %d\n",sum);
	
	free(m);
	return 0;
}

void inicializa(int *mat,int numf,int numc){
	int i,j;
	for(i=0;i<numf;i++){
		for(j=0;j<numc;j++){
			scanf("%d",&*(mat+i*numf+j));
		}
	}
}
