#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *vector;
	int i,min;
	printf("Indique el tamaño del vector:");
	scanf("%d",&n);
	vector=(int*)malloc(n*sizeof(int));

	printf("Introduce terminos del vector:\n");	
	for(i=0;i<n;i++){	
		scanf("%d",&*(vector+i));
	}
	
	min=*(vector+0);
	for(i=1;i<n;i++){
		if(*(vector+i)<min){
			min=*(vector+i);
		}
	}
	printf("El minimo es %d\n",min);
	free(vector);
	return 0;
}
