# Explicación

Como dice el problema, cada casilla solo puede tener una sola pista, es decir, a partir de cada casilla se puede ir a exactamente una casilla o a ninguna (el caso donde la pista sea $(-1,-1)$).

Haciendo esta observación, seguir el camino desde una casilla visitará a lo más $N^2$ casillas (dicho de otra manera, visitar todas las casillas del tablero); por lo tanto, si se simula el camino desde cada casilla del tablero, la complejidad del algoritmo sería $O(N^2 \cdot N^2)$, lo que es $O(N^4)$ y como $1 \leq N \leq 50$ la solución entra en tiempo.

Habría que considerar el casos cuando existen ciclos, si no se tiene cuidado podrías nunca salir; para evitar esto marcaremos las casillas visitadas.

```
#include<stdio.h>
int n,ff,cf,filas[55][55],columnas[55][55],resp=0;
bool pintadas[55][55];
void simula(int f,int c)
{
    if(f==ff && c==cf)
    {
        resp++;
        return;
    }
    if(pintadas[f][c]==true) return;
    if(filas[f][c]==-1 && columnas[f][c]==-1) return;

    pintadas[f][c]=true;
    simula(filas[f][c],columnas[f][c]);
    pintadas[f][c]=false;
    return;
}
int main()
{
    scanf("%d %d %d",&n,&ff,&cf);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d %d",&filas[i][j],&columnas[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==ff && j==cf) continue;
            simula(i,j);
        }
    }
    printf("%d",resp);
    return 0;
}
```
