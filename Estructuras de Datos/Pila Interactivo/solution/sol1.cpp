#include "PilaInteractivo.h"
#include <bits/stdc++.h>
using namespace std;
stack<int>pila;
void agrega(int n) {
	pila.push(n);
}

int saca() {
	if(pila.empty())return -1;
	else {
        int aux=pila.top();
        pila.pop();
        return aux;

	}
}
