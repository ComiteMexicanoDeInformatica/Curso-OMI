#include "ordenador.h"

/**

int guardar(int indice)
int obtener(int indice)
bool desplazar(int indice)
void insertar(int indice)

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
