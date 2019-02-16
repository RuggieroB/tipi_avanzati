/*
# tipi_avanzati

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "sumvett.c": Algoritmo che dopo aver chiesto all'utente tre numeri interi, li memorizza all'interno di un vettore, li somma, ne calcola la media e infine 
  stampa tutti i dati e i risultati.
*/

#include <stdio.h>
int main()
{
	int num [3];
	int sum=0;
	double med;
	printf("SOMMA E MEDIA DI 3 VALORI INTERI\n\n");
	printf("\nInserire 3 valori interi:");
	printf("\n?");
	scanf("%d",&num [0]);
	printf("\n?");
	scanf("%d",&num [1]);
	printf("\n?");
	scanf("%d",&num [2]);
	sum = num [0] + num [1] + num [2];
	med = sum / 3.0;
	printf("\n\nDati iniziali:");
	printf("\nnum [0] = \t%d",num [0]);
	printf("\nnum [1] = \t%d",num [1]);
	printf("\nnum [2] = \t%d",num [2]);
	printf("\n\nSomma:\t%d",sum);
	printf("\nMedia:\t%f\n",med);
return 0;
}