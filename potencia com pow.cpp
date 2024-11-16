#include <stdio.h>
#include <math.h>

int main (void){
	
	int n1, n2, calculo;
	
	printf ("CALCUO DE POTENCIA\n\n");
	
	printf ("Digite o numero da BASE: \n");
	scanf ("%d", &n1);

	printf ("Digite o numero da EXPOENTE: \n");	
	scanf ("%d", &n2);
	
	calculo = pow (n1,n2);
	
	printf ("ESSE EH O CALCULO DA PONTENCIACAO: %d", calculo);
	return 0;
}
