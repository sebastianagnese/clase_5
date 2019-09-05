/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define CANT_ELEMENTS 10

int main(void)
{
	//int i;
	int varVector[CANT_ELEMENTS]; // declara el vector con cantidad en define
	//varVector[0] = 5;			  // le damos un valor al primer elemento

	/*for (i=0;i<CANT_ELEMENTS;i++)
	{
		varVector[i] = 3;		  // asignamos valor a cada elemento inside for
	}
	return 0; */
	int getInt(	int *pValor, "Ingrese un valor: ",
				"Error, reingrese un valor: ",
				0, 100, 5);

}

int getInt(	int *pValor, char *pMensaje, char *pMensajeError,
			int minimo, int maximo, int reintentos)
{
	int numero;
	int retorna = -1;

		do
		{
		printf("%s",pMensaje);
		__fpurge(stdin);
			if(scanf("%d",&numero)==1 && numero >= minimo && numero <= maximo)
			{
				*pValor = numero;
				retorna = 0;
				break;
			}
		printf("%s",pMensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorna;


}







