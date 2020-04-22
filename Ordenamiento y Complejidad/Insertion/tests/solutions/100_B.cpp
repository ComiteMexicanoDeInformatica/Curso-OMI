#include "ordenador.h"
void ordenar(int n){
	for(int i=0;i<n;i++){
		int aux=guardar(i),aux2=i-1;
		while(aux2>=0&&obtener(aux2)>aux){
			desplazar(aux2);
			aux2--;
		}
		insertar(aux2+1);
	}
}
