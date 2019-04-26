#include <stdio.h>
#include <stdlib.h>

void rellena(int *mat,int num);
int main(){
	int i,j,n;
	int *m;
	
	printf("Dimension matriz:");
	scanf("%d",&n);
	m=(int*)malloc(n*n*sizeof(int));

	printf("La matriz generada es:\n");	
	rellena(m,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d",*(m+i*n+j));
		}
		printf("\n");
	}
	free(m);
	return 0;
}


void rellena(int *mat,int num){
	int i,j;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){	
			if(i==j){
				*(mat+i*num+j)=i*j;
			}else{
				*(mat+i*num+j)=i-j;
			}
		}
	}
}
