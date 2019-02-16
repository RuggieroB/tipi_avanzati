/*
# tipi_avanzati

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "address.c": Algotitmo che stampa il valore dell'indirizzo di una variabile float dopo averlo memorizzato in un puntatore.
*/

#include <stdio.h>
int main()
{
	float num, *p_num;
	p_num = &num;
	printf("\"num\" address is:\t%p\n", p_num);
return 0;
}