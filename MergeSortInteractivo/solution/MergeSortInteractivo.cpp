#include "MergeSortInteractivo.h"

// Main

void mezclar(int izquierda, int derecha) {
    if(izquierda<derecha)
    {
    mezclar(izquierda,izquierda+((derecha-izquierda)/2));
    mezclar(izquierda+((derecha-izquierda)/2)+1,derecha);
	combinar(izquierda,izquierda+((derecha-izquierda)/2),derecha);
    }
}
