#include <stdio.h>
#include <stdlib.h>

void inicializa(int *mat,int numf,int numc);
int main(){
	int i,j,nf,nc;
	int *m;
	printf("Numero de filas:");
	scanf("%d",&nf);
	printf("Numero de columnas:");
	scanf("%d",&nc);
	m=(int*)malloc(nf*nc*sizeof(int));

	inicializa(m,nf,nc);
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			printf("%4d",*(m+i*nf+j));
		}
		printf("\n");
	}
		
	free(m);
	return 0;
}

void inicializa(int *mat,int numf,int numc){
	int i,j;
	int n=numf*numc;
	for(i=0;i<numf;i++){
		for(j=0;j<numc;j++){
			*(mat+i*numf+j)=n;
			n--;
		}
	}
}
