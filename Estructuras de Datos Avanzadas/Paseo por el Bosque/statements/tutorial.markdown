```
	#include <bits/stdc++.h>
	using namespace std;
	#define MAX 105
	int izq[MAX],der[MAX],tree[MAX],nodos=0;
	int new_nodo(int n){
		tree[nodos]=n;
		izq[nodos]=-1;
		der[nodos]=-1;
		return nodos++;
	}
	void in(int nodo,int n){
		if(n<tree[nodo]){
			if(izq[nodo]==-1)izq[nodo]=new_nodo(n);
		else in(izq[nodo],n);
	}
	else {
		if(der[nodo]==-1)der[nodo]=new_nodo(n);
		else in(der[nodo],n);
	}
	}

	void view(int nodo){
		cout << tree[nodo] << " ";
	}
	void preorden(int nodo){
		if(nodo==-1)return;
		view(nodo);
		preorden(izq[nodo]);
		preorden(der[nodo]);
	}
	void inorden(int nodo){
		if(nodo==-1)return;
		inorden(izq[nodo]);
		view(nodo);
		inorden(der[nodo]);
	}
	void postorden(int nodo){
		if(nodo==-1)return;
		postorden(izq[nodo]);
		postorden(der[nodo]);
		view(nodo);
	}
	
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		int n,i,raiz;
		cin>>n;
		int v[n];
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		for(i=0;i<n;i++){
			if(i==0)raiz=new_nodo(v[i]);
			else in(raiz,v[i]);
		}
		preorden(raiz);
		cout << "\n";
		inorden(raiz);
		cout << "\n";
		postorden(raiz);
	}

```

# Explicación

Para construir el arbol binario, cada nodo debe tener dos hijos, el izquierdo y el derecho, donde el izquierdo es menor que el padre y el derecho mayor.

```
int izq[MAX],der[MAX],tree[MAX],nodos=0;
```

En la posición $i$ del arreglo $tree[MAX]$ almacenara el valor del i-esimo nodo, en $der[MAX]$ el hijo derecho del i-esimo nodo e $izq[MAX]$ el hijo izquierdo del i-esimo nodo.


```
	int new_nodo(int n){
		tree[nodos]=n;
		izq[nodos]=-1;
		der[nodos]=-1;
		return nodos++;
	}
```

La función $int new_nodo(int n)$ recibe como parametro el valor que se quiere agregar al árbol.

Hay que tener en cuenta que $nodos$ es una variable global que estara representando la cantidad de nodos que hay en el árbol. Asi los datos del $i-esimo$ y gracias a esto su almacenamiento sera en la casilla $i$ de los arreglos.

```
	void in(int nodo,int n){
		if(n<tree[nodo]){
			if(izq[nodo]==-1)izq[nodo]=new_nodo(n);
		else in(izq[nodo],n);
	}
	else {
		if(der[nodo]==-1)der[nodo]=new_nodo(n);
		else in(der[nodo],n);
	}
	}
```

Esta funcion $void in(int nodo,int n)$ su objetivo es insertar un nuevo nodo en la posición correcta, la variable $nodo$ representa el nodo del árbol en donde esta actualmente la función por decirlo de alguna manera; y la variable $n$ es el valor que se desea insertar.
Entonces la condicional decide si $n$ debe ir a la izquierda o a la derecha de $nodo$, y asi de una manera recursiva se encuentra la posición adecuada.

```
	void view(int nodo){
		cout << tree[nodo] << " ";
	}
```

La funcion $void view(int nodo)$ da como salida el valor de tree[nodo].


```
	void preorden(int nodo){
		if(nodo==-1)return;
		view(nodo);
		preorden(izq[nodo]);
		preorden(der[nodo]);
	}
```

La función $void preorden(int nodo)$ tiene como objetivo realizar el recorrido en preorden del arbol, teniendo como caso base si llegamos a un nodo no valido, si no, dar como salida el nodo padre y de manera recursiva ir al lado izquierdo y despues al derecho.

```
	void inorden(int nodo){
		if(nodo==-1)return;
		inorden(izq[nodo]);
		view(nodo);
		inorden(der[nodo]);
	}
```

La funcion $void inorden(int nodo)$ es analogo solo se cambia el orden de visitar los nodos, primero hijo izquierdo luego padre y luego hijo derecho.

```
	void postorden(int nodo){
		if(nodo==-1)return;
		postorden(izq[nodo]);
		postorden(der[nodo]);
		view(nodo);
	}
```

La funcion $void postorden(int nodo)$ primero visita hijo izquierdo, luego hijo derecho y por ultimo el padre.

```
	for(i=0;i<n;i++){
		if(i==0)raiz=new_nodo(v[i]);
		else in(raiz,v[i]);
	}
```

Basicamente el condicional es para tener en cuenta cuando $i=0$ no existe ningun nodo en el árbol, y este lo asigna como raiz.
Si ya no es un árbol vacio, es decir $i>0$ solo se agrega al árbol respestando la regla del hijo izquierdo y el derecho.

```
		preorden(raiz);
		cout << "\n";
		inorden(raiz);
		cout << "\n";
		postorden(raiz);
```

Por ultimo mandar a llamar a los recorridos como lo solicita el problema.