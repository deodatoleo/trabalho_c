#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int test(int *vetor){
int i; 
	for(i=0; i<10; i++){
		printf("%d\n", vetor[i]);
	}
}


int maiorValor (int *vetor){
	
	int i = 0, j = 0,cont = 0; 
	
    for(i=0; i<10; i++){
    	for(j=0; j<10; j++){
           if(vetor[i]>=vetor[j]){
		   	cont++;  	
		   }
		   
		}
	
		if(cont==10){
			puts(" O maior numero do vetor eh:");
			printf("%d\n", vetor[i]);
		
	   }else{
	   	cont = 0;
	   }
	   
	}
	
}



	



int main(void){
	
	int vetor[10], i;	
	srand(time(NULL));
 		for(i = 0; i<10; i++){
 			vetor[i] = rand() % 101;
		}
		
		
	maiorValor(vetor);
	puts("POR FAVOR CONFIRA OS NUMEROS ARMAZENADOS NO VETOR: ");
	test(vetor);
return 0;	
}
