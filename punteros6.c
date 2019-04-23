#include <stdio.h>
#include <stdlib.h>

void rellena(int nf,int nc,int *m);
void imprime(int nf,int nc,int *m);
int main(){
	int i,j,numf,numc;
	int *mat;
	
	printf("Numero de filas:");
	scanf("%d",&numf);
	printf("Numero de columnas:");
	scanf("%d",&numc);
	mat=(int*)malloc(numf*numc*sizeof(int));

	rellena(numf,numc,mat);
	imprime(numf,numc,mat);
	free(mat);
	return 0;
}

void rellena(int nf,int nc,int *m){
	int i,j;
	int num=0;
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			*(m+i*nf+j)=num;
			num=num+2;
		}
	}
}

void imprime(int nf,int nc,int *m){
	int i,j;
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			printf("%4d",*(m+i*nf+j));
		}
		printf("\n");
	}
}
