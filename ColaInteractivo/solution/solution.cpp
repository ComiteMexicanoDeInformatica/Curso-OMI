#include "ColaInteractivo.h"

int arreglo[10000];
int ini,fin;

void agrega(int n)
{
	arreglo[fin] = n;
	fin++;
}

int saca()
{
	if (fin-ini == 0) {
		return -1;
	} else {
	    ini++;
		return arreglo[ini-1];
	}
}
