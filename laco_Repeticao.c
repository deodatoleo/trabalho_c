#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int rodar = 1;
int rsp = 0;


void soma(){
	float x,y,soma;
	puts("Digite o primeiro numero: ");
	scanf("%f", &x);
	puts("Digite o segundo numero: ");
	scanf("%f", &y);
	soma = x + y;
	printf("\n%f", soma);
	
}


void sub(){
	float x,y,subtrair;
	puts("Digite o primeiro numero: ");
	scanf("%f", &x);
	puts("Digite o segundo numero: ");
	scanf("%f", &y);
	subtrair = x - y;
	printf("\n%f", subtrair);
	
}

void multiplicar(){
	float x,y,multiplicar;
	puts("Digite o primeiro numero: ");
	scanf("%f", &x);
	puts("Digite o segundo numero: ");
	scanf("%f", &y);
	multiplicar = x * y;
	printf("\n%f", multiplicar);
}

void dividir(){
	float x,y,dividir;
	puts("Digite o primeiro numero: ");
	scanf("%f", &x);
	puts("Digite o segundo numero: ");
	scanf("%f", &y);
	if(y == 0){
		puts("ERROR: 0 nao pode dividir outro numero!!!");
	}
	dividir= x / y;
	printf("\n%f", dividir);
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

do{
	
	    	
    	puts("\n****************CALCULADORA******************");
    	puts("************** 1- SOMAR   *******************");
    	puts("************** 2- SUBTRAIR ******************");
    	puts("************** 3- MULTIPLICAR ***************");
    	puts("************** 4- DIVIDIR     ***************");
	
	puts("Digite a opc desejada: EX: 1 - Somar , 2 - Subtrair, 3 - Multiplicar, 4 - Dividir: " );
	  scanf("%d", &rsp);

	
		switch(rsp)	
		{
			case 1:
	 			soma();
	 			
			break;
	
			case 2:
	 			sub();
	 			
			break;
	
			case 3:
	 			multiplicar();
	 			
			break;
	
			case 4:
	 			dividir();
	 		
			break;
		}
		continuar();
		 
}while(rodar != 0);

return 0;
}
