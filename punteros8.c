#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellena(int nf,int nc,int *m);
int main(){
	int numf,numc,i,j;
	int *mat;
	srand(time(NULL));
	printf("Numero de filas:");
	scanf("%d",&numf);
	printf("Numero de columnas:");
	scanf("%d",&numc);
	mat=(int*)malloc(numf*numc*sizeof(int));
	rellena(numf,numc,mat);
	for(i=0;i<numf;i++){
		for(j=0;j<numc;j++){
			printf("%4d",*(mat+i*numf*j));
		}
		printf("\n");
	}
	free(mat);
	return 0;
}

void rellena(int nf,int nc,int *m){
	int i,j;
	for(i=0;i<nf;i++){
		for(j=0;j<nc;j++){
			*(m+nf*i+j)=rand()%(100-1)+1;
		}
	}
}	
