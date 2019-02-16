/*
# tipi_avanzati

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "asterischi.c": Algoritmo che stampa 3 asterischi (uno per riga) a distanza di 700 millisecondi l'uno dall'altro.
*/

#include <stdio.h>
#include <time.h>
int main()
{
	struct timespec intervallo;  
	intervallo.tv_sec = 0;             
	intervallo.tv_nsec = 700 * 1000 * 1000;
	puts("*");
	nanosleep(&intervallo, NULL);
	puts("*");
	nanosleep(&intervallo, NULL);
	puts("*");
	nanosleep(&intervallo, NULL);
return 0;
}