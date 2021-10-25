/*
 ============================================================================
 Name        : Parcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float aplicarAumento (float precioDeProducto)

int main(void) {

	float precio = 10;
	float resultado;


	resultado = aplicarAumento(precio);

	char miNombre[15];
	int vecesQueSeReemplazo;

	vecesQueSeReemplazo= reemplazarCaracteres(miNombre, 15, 'a', 'u');


	return EXIT_SUCCESS;
}


float aplicarAumento (float precioDeProducto)
{
	return precioDeProducto * 1.05
}

int reemplazarCaracteres (char texto, int largoTexto, char caracterAReemplazar, char caracterDeReemplazo)
{
	int indice;
	int contador = 0;

	for (indice = 0; indice < largoTexto; indice++)
	{
		if(caraterAReemplazar == caracterDeReemplazo)
		{
			texto[indice]= caracterDeReemplazo; contador++;
		}
	}
	return contador;
}

