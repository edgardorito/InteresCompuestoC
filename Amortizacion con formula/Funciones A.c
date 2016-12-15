#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float SN(float inte, int mes) { //formula para saldo insoluto
	inte=(1-(pow(1+inte,-mes)));
	return inte;
}


