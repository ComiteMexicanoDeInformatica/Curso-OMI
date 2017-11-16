#include <algorithm>
#include <iostream>
#include "ordenador.h"
#define MAX_OPERACIONES 5000

using namespace std;

int A[2001],B[2001];
int i,m,n,j,N;
bool operacionesExcedidas;
int valorGuardado;

int guardar(int indice) //siguiente guarda el valor en indice
{
	if(indice<0 || indice >=n)
		return -1;
	valorGuardado=B[indice];
	cout<<"Valor guardado: "<<valorGuardado<<endl;
	return valorGuardado;
}

int obtener(int indice)
{
	if(indice<0 || indice>=n) //indice no válido
		{
		cout<<"Indice no válido\n";
		return -1;
		}
	return B[indice];
}

bool desplazar(int indice)
{
	if(indice<0 || indice>=n-1 || m<0) //indice no válido, número de operaciones excedidas
		{
		if(m<0)
			{
			cout<<"Numero de operaciones excedido\n";
			operacionesExcedidas=1;
			}
		else
			cout<<"Indice no valido\n";
		return 0;
		}
	B[indice+1]=B[indice];
	cout<<"Se movio una posicion: "<<B[indice+1]<<" ("<<--m<<" operaciones restantes)\n";
	return 1;
}

void insertar(int indice)
{
	if(N<0)
		{
		cout<<"Numero de operaciones excedido\n";
		operacionesExcedidas=1;
		return;
		}
	if(indice<0 || indice>=n)
		{
		cout<<"Indice no valido. No se inserto el valor "<<valorGuardado<<endl;
		return;
		}
	cout<<"insertar "<<valorGuardado<<" en posicion "<<indice<<endl;
	N--;
	B[indice]=valorGuardado;
	valorGuardado=-1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	N=n;
	m=MAX_OPERACIONES;
	for(int x=0;x<n;x++)
	        {
		cin>>A[x];
		B[x]=A[x];
		}
	ordenar(n);
	if(operacionesExcedidas)
		{
		cout<<"Numero de operaciones excedidas\n";
		return 0;
		}
	sort(A,A+n);
	cout<<"Comparando resultados\n";
	for(int x=0;x<n;x++)
		{
		cout<<A[x]<<" "<<B[x]<<" ";
		if(A[x]!=B[x])
			{
			cout<<"incorrecto\nNo has resuelto el problema\n";
			return 0;
			}
		else
			cout<<"correcto\n";
		}
	cout<<"Haz resuelto el problema :)\n";
	return 0;
}

