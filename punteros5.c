#include <stdio.h>
#include <stdlib.h>
#define NF 10
#define NC 10

void inicializa(int *m);
int main(){
	int i,j;
	int *mat;
	mat=(int*)malloc(NF*NC*sizeof(int));
	inicializa(mat);
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",*(mat+i*NF+j));
		}
		printf("\n");
	}
	free(mat);
	return 0;
}


void inicializa(int *m){
	int i,j;
	int num=1;
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			*(m+i*NF+j)=num;
			num++;
		}
	}
}
