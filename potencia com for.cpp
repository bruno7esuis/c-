#include <stdio.h>
#include <math.h>

int calculo (int base, int expoente){
	
	int potencia = 1;
	
	for (expoente; expoente > 0; expoente--){
		
		potencia = potencia * base;
		
	}
	
	printf ("ESSE EH O RESULTADO DO CALCULO: %d", potencia);
	
}


int main (void){
	
	int n1, n2;
	char resultado;
	
	printf ("CALCUlO DE POTENCIA\n\n");
	
	printf ("Digite o numero da BASE: \n");
	scanf ("%d", &n1);

	printf ("Digite o numero da EXPOENTE: \n");	
	scanf ("%d", &n2);
	
	resultado = calculo(n1,n2);
	
	return 0;
}
