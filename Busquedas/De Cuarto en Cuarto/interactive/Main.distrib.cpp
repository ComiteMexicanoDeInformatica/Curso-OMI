#include <stdio.h>
#include <utility>
#include <math.h>
#include <stack>
#include <stdlib.h>
#include "DeCuartoEnCuarto.h"
#define p1 first
#define p2 second
using namespace std;

long long num_moves=0;
int num_nodos,ini,fin;
stack< int > camino;
int e[100010][3];

int siguienteCuarto(int n)
{
    if(n<1 || n>2) return -1;
    return e[camino.top()][n];
}

void move(int c)
{
    if(e[camino.top()][1]!=c && e[camino.top()][2]!=c){
        printf("No obtuviste porcentaje del caso. Quisiste ir a un cuarto inalcanzable desde donde estaba el personaje");
        exit(0);
    }

    camino.push(c);
    num_moves++;
    return;
}

void regresa()
{
    if(camino.size() <= 1){
        printf("No obtuviste porcentaje del caso. Quisiste regresar cuando ya no se podia");
        exit(0);
    }
    camino.pop();
    return;
}


int main()
{
    scanf("%d %d %d",&num_nodos,&ini,&fin);

    for(int i=1; i<=num_nodos; i++){
        scanf("%d %d",&e[i][1],&e[i][2]);
    }

    camino.push(ini);

    Player1(ini,fin);

    if(camino.empty() || camino.top() != fin){
        printf("No obtuviste porcentaje del caso. El personaje no termino en el cuarto adecuado");
        return 0;
    }

    if(num_moves <= num_nodos)
    {
        printf("Felicidades, Obtuviste todo el porcentaje del caso. Hiciste %d moves()",num_moves);
    }
    if(num_moves>num_nodos && num_moves<=2*num_nodos)
    {
        printf("Obtuviste la mitad del porcentaje del caso. Hiciste %d moves()",num_moves);
    }
    if(num_moves>2*num_nodos)
    {
        printf("No obtuviste porcentaje del caso. Hiciste %d moves()",num_moves);
    }
    return 0;
}
