#include "ordenador.h"

/**

int siguiente(int indice)
int obten(int indice)
bool desplaza(int indice)
void inserta(int indice)

**/

void ordenar(int n) //debe llamarse igual que el idl
{
	int t,y;
	for(int x=0;x<n;x++)
		{
		t=guardar(x);
		y=x-1;
		while(y>=0 && obtener(y)>t)
			{
			desplazar(y);
			y--;
			}
		insertar(y+1);
		}
}
