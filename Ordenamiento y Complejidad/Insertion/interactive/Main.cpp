#include <iostream>
#include "InsertionSortInteractivo.h" //esto también tiene que llamarse igual

/**

Calificación:
0.5 si el arreglo está ordenado
0.5 si utiliza el mínimo de operaciones

**/

using namespace std;

int *A,*B;
int i,m,n,j,N,M; //m: operaciones mínimas, M: operaciones que hizo el alumno
bool operacionesExcedidas;
int valorGuardado;
double calificacion;

int guardar(int indice) //siguiente guarda el valor en indice
{
	if(indice<0 || indice >=n)
	        return -1;
	valorGuardado=B[indice];
	return valorGuardado;
}

int obtener(int indice)
{
	if(indice<0 || indice>n) //indice no válido
		return -1;
	return B[indice];
}

bool desplazar(int indice)
{
	if(indice<0 || indice>=n-1) //indice no válido
		return 0;
	B[indice+1]=B[indice];
	M++;
	return 1;
}

void insertar(int indice)
{
	if(N<0)
		{
		operacionesExcedidas=true;
		return;
		}
	if(indice<0 || indice>=n) //indice no valido
		return;
	N--;
	B[indice]=valorGuardado;
	valorGuardado=-1;
}

int main()
{
	valorGuardado=-1;
	cin>>n;
	N=n;
	int c;
	A=(int*)malloc(n*sizeof(int));
	B=(int*)malloc(n*sizeof(int));
	for(int x=0;x<n;x++)
		{
		cin>>c;
		B[x]=c;
		int y=x-1;
		while(y>=0 && A[y]>c) //si hay dos números iguales no cuenta el m
			{
			m++;
			A[y+1]=A[y];
			y--;
			}
		A[y+1]=c;
		}
	//Operación del alumno
	ordenar(n);
	if(operacionesExcedidas)
		{
		cout<<"0\n";
		return 0;
		}
	for(int x=0;x<n;x++)
		{
		if(A[x]!=B[x])
			{
			cout<<"0\n";
			return 0;
			}
		}
	calificacion=1-((double)(M-m)/((n*n-m)*2));
	cout<<calificacion<<endl;
	return 0;
}
