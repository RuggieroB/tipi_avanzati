/*
# tipi_avanzati

Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "cast.c": Algoritmo che chiede all'utente di inserire un valore in virgola mobile (double), lo converta in intero (int) e quindi stampi entrambi i valori.
*/

#include <stdio.h>
int main()
{
	double num_double;
	int num_int;
	printf("Please, insert a floating point number.\n");
	printf("?\t");
	scanf("%lf",&num_double);
	num_int = (int)num_double;
	printf("\nYour floating point number is:\t%f",num_double);
	printf("\nAfter casting to int:\t%d\n",num_int);
return 0;
}

