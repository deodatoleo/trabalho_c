#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rodar = 1;
int rsp = 0;
int vetor[10], preencher = 0;	
int tam = 0;

int test(int *vetor){
	int i; 
	for(i=0; i<10; i++){
		printf("%d\t", vetor[i]);
	}
}


int somarVetor(int *vetor){
 int i,soma = 0;
 	
 	for(i=0; i<10; i++){
 		soma = soma + vetor[i];
	 }
	 puts("O valor da soma dos valore armazeandos no vetor eh:");
	 printf("%d\n", soma);
}


void maiorValor(int *vetor){
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

int invertido(int *vetor){
 	int i,j,aux;
 	
 	puts("Confira abaixo o vetor invertido: \n");
 	for(i=9; i>=0;i--)
	 {
	   for(j=0; j<10; j++)
	   {
 	   		aux = vetor[i];
 	   		vetor[i] = vetor[j];
 	   		vetor[j] = aux;
 	   }
			
	 }
	 
	 
	 for(i=0; i<10; i++){
		printf("%d\t", vetor[i]);
	}
}

void ordemCrescente(int *vetor){
	int i = 9,j, aux;
	
	for(i=0;i<10; i++)
	{
		
		for(j=i+1; j<10; j++)
		{	
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;		   
		}
		
	}
	
	puts("Confira abaixo o vetor em ordem crescente. ");
	for(i=0; i<10; i++)
	{
		printf("%d\t", vetor[i]);
	}

}

void continuar(){
	char continuar;
	printf("\n\nDeseja realizar uma nova operacao? S - Sim  N - Nao? ");
	scanf("%s", &continuar);
		if(continuar == 'n'){
		 rodar = 0;
		}
}

int main(){
	
srand(time(NULL));
 for(preencher = 0; preencher<10; preencher++){
 	vetor[preencher] = rand() % 101;
 } 
  
  
do{
	
	    	
    	puts("\n********* MANIPULACAO COM VETOR ***********");
    	puts("************ 1- SOMAR O DADOS   *************");
    	puts("************ 2- MAIOR VALOR     *************");
    	puts("************ 3- INVERTIDO       *************");
    	puts("************ 4- ORDEM CRESCENTE *************");
    	puts("************ 5- SAIR            *************");
	
	puts("Digite a opc desejada: EX: 1 - Somar Dados, 2 - Maior Valor, 3 - Invertido, 4 - Ordem Crescente " );
	scanf("%d", &rsp);

	
		switch(rsp)	
		{
			case 1:
	 			somarVetor(vetor);
	 			puts("Confira a abaixo os números que foram somados:");
	 			test(vetor);
	 			
			break;
	
			case 2:
	 			maiorValor(vetor);
	 			puts("Confira a abaixo os números que foram armazenados no vetor:");
	 			test(vetor);
	 			
			break;
	
	
			case 3:
	 			puts("\nConfira abaixo o vetor na orden invertida: ");
	 			invertido(vetor);
			break;
	
			case 4:
	 			test(vetor);
	 			puts("");
	 			ordemCrescente(vetor);
			break;
			
			case 5: 
				return 0;
			
			default:
				puts("Opcao invalida");
		}
		continuar();
		 
}while(rodar != 0);

return 0;
}
