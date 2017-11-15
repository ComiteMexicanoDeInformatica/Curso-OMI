#include "ordenador.h"

/**

int siguiente()
int obten(int indice)
bool desplaza(int indice)
void inserta(int indice)

**/

void ordena(int n) //debe llamarse igual que el idl
{
	int t,y;
	for(int x=0;x<n;x++)
		{
		t=siguiente();
		y=x-1;
		while(y>=0 && obten(y)>t)
			{
			desplaza(y);
			y--;
			}
		inserta(y+1);
		}
}
