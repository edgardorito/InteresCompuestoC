#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void ICR(float prest,float inte,float amort,int mes,int meses);
int main(int argc, char *argv[]) {
	float prest, interes,amort;
	int mes;
	printf("Introduzca cantidad a pagar: ");
	scanf("%f",&prest);
	printf ("\nIntroduzca meses a pagar: ");
	scanf ("%i",&mes); 
	printf ("\nIntroduzca porcentaje de interes anual: " );
	scanf ("%f",&interes);
	printf("\n");
	interes=(interes*1/12*0.01); 
	amort=(prest*interes)/(1+(-pow(1+interes,-mes))); 
	printf("mes\tAmortizacion\tInteres\t  Abono\t     Saldo insoluto\t\n"); 
	printf(" 0\t\t\t\t\t\t%.2f \n",prest);
	ICR(prest,interes,amort,1,mes);
}

void ICR(float prest,float inte,float amort,int mes,int meses){
	float interes;
	printf(" %i\t",mes); 
	interes=prest*inte;
	printf("%.2f\t\t",(amort+(-interes))); 
	printf("%.2f\t  ",interes); 
	printf("%.2f\t",amort); 
	prest=prest+(-(amort+(-interes))); 
	printf("%.2f\t",prest);
	printf("\n");
	if(mes<meses){
		ICR(prest,inte,amort,mes+1,meses);
	}
}
