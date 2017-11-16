#include <algorithm>
#include <string.h>
#include <iostream>
#include "ordenador.h" //esto también tiene que llamarse igual

using namespace std;

int *A,*B;
int i,m,n,j,N;
bool operacionesExcedidas;

int siguiente()
{
	return A[i++];
}

int obten(int indice)
{
	if(indice<0 || indice>=n) //indice no válido
		return -1;
	return B[indice];
}

bool desplaza(int indice)
{
	if(indice<0 || indice>=n-1 || m<0) //indice no válido, número de operaciones excedidas
		{
		if(m<0)
			operacionesExcedidas=1;
		return 0;
		}
	B[indice+1]=B[indice];
	m--;
	return 1;
}

void inserta(int indice)
{
	if(N<0)
		{
		operacionesExcedidas=1;
		return;
		}
	N--;
	B[indice]=A[j++];
}

int main()
{
	cin>>n;
	N=n;
	A=(int*)malloc(n*sizeof(int));
	B=(int*)malloc(n*sizeof(int));
	for(int x=0;x<n;x++)
		{
		cin>>*(A+x);
		for(int y=x-1;y>=0;y--) //si hay dos números iguales no cuenta el m
			if(A[y]>A[x])
				m++;
		}
	if(n<=100) //primeros 40 puntos
		m=n*n;
	memset(B,-1,sizeof B);
	ordena(n);
	if(operacionesExcedidas)
		{
		cout<<"0\n";
		return 0;
		}
	sort(A,A+n);
	for(int x=0;x<n;x++)
		{
		if(A[x]!=B[x])
			{
			cout<<"0\n";
			return 0;
			}
		}
	cout<<"1\n";
	return 0;
}
