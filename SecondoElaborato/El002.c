/********************************************************************************
 *                                                                              *
 *                   Architetture dei sistemi di Elaborazione                   *
 *                                                                              *
 ********************************************************************************

 Elaborato 2
 Descrizione: Dato in input un numero naturale n, restituire i primi n termini
			  della successione di Fibonacci.

 ********************************************************************************/


#include <stdio.h>

void main()
{
	//Variabili
	int n=12;						//Numero di termini da restituire
	int successione[50];			//Vettore in cui mettere i primi n termini
									//della successione di Fibonacci

	//Blocco Assembler
	__asm
	{
	}

	//Stampa su video
	{
		int i;
		for(i=0;i<=n;i++)
		{
			printf("%d\n",successione[i]);
		}
	}
}
