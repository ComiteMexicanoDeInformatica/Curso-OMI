```
	#include "pila_interactivo.h"

	int arreglo[10000];
	int tam;

	void agrega(int n)
	{
		arreglo[tam++] = n;
	}

	int saca()
	{
		if (tam == 0) {
			return -1;
		} else {
		return arreglo[--tam];
		}	
	}
```

# Funci�n agrega

Aqu� lo �nico que se hace es agregar el elemento una posici�n despu�s del ultimo que se ingres� o en la 0 si es el primero.

La operaci�n tam++ se denomina pos-incremento y lo que hace es acceder al valor actual de la variable e inmediata mente despues incrementa en uno la variable.

Tambien existe el pre-incremento como ++tam y aumenta el valor de la varible y despues accede a el.

# Funci�n saca

Como se puede ver el condicional valida cuando el tama�o es cero o mayor, cuando es cero no hay nada que sacar y es el caso especial, por eso el -1; de lo contrario se regresa el ultimo elemento que se ingres� y se reduce en uno el tama�o.

La operaci�n --tam se denomina pre-decremento y lo que hace es disminuir en uno el valor de la variable e inmediatamente despues acceder al nuevo valor de la variable.

Tambien existe el pos-decremento como tam-- y accede al valor y despues lo decrementa en uno.