#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float prest, interes,amort;
	int mes,meses=1;
	printf("Introduzca cantidad a pagar: ");
	scanf("%f",&prest);
	printf ("\nIntroduzca meses a pagar: ");
	scanf ("%i",&mes); 
	printf ("\nIntroduzca porcentaje de interes anual: " );
	scanf ("%f",&interes);
	printf("\n");
	interes=(interes*1/12*0.01); //se calcula el interes anual
	amort=(prest*interes)/(1+(-pow(1+interes,-mes))); //se calcula el abono
	printf("mes\tAmortizacion\tInteres\t  Abono\t     Saldo insoluto\t\n"); //imprime la primer fila de la tabla
	printf(" 0\t\t\t\t\t\t%.2f \n",prest);
	while(mes>0){
		printf(" %i\t",meses); 
		printf("%.2f\t\t",(amort+(-(prest*interes)))); //amortizacion
		printf("%.2f\t  ",prest*interes); //se obtiene interes
		printf("%.2f\t",amort); //imprime abono
		prest=prest+(-(amort+(-(prest*interes)))); //se obtiene saldo insoluto
		printf("%.2f\t",prest);
		printf("\n");
		mes=mes+(-1);
		meses=meses+1;	//es para meses ascendentemente
	}	
	return 0;
}
