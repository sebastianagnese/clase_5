/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
int getInt (int *pNum);

int main(void)
{
	int a;
	int b;
	//int resultado;

	a = getInt (&a);
	b = getInt (&b);

	//prueba
	printf("Los valores ingresados son %d y %d",a,b);

	return 0;
}

int getInt (int *pNum)
{
	int valorReturn = -1;
	int numero;

	printf("Ingrese un valor: ");
	scanf("%d",&numero);

	*pNum = numero;

	valorReturn = 0;

	return valorReturn;
}










