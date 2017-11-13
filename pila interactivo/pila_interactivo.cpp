#include "pila_interactivo.h"

int arreglo[10000];
int tamaño;

void agrega(int n)
{
	arreglo[tamaño++] = n;
}

int saca()
{
	if (tamaño == 0) {
		return -1;
	} else {
		return arreglo[--tamaño];
	}	
}