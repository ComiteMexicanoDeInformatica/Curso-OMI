# Análisis del problema

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
# Explicación del codigo

Las primeras líneas de codigo son para dar entrada de los datos, para esto, como cada casilla tendrá la fila y columna de la casilla a la que puede ir, se declararon las matrices `filas[55][55]` y `columnas[55][55]`, donde en la casilla `[i][j]` se guardará la información de esa casilla.

La matriz `pintadas[][]` es para marcar nuestro camino y asi no entrar a un ciclo y que se genere un camino infinito.

Luego toca simular el camino desde cada casilla $(i,j)$, por eso el segundo `for`; y el conteo de los caminos se llevará a cabo en la variable global `resp`.

La primera condicional es para detectar si la casilla que queremos evaluar es la casilla a la que se desea llegar, ya que como indica el problema esté camino no deberá considerarse.
De no ser esa casilla se llama a la función `simula(i,j);` para seguir las pistas. 

```
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
```
Como puede verse, nuestro caso base es cuando ya llegamos a la casilla destino, de cumplirse se aumenta en uno las respuestas y termina ese llamado.

También en el caso de que la casilla este marcada o bien no haya a donde ir (es decir, que la casilla tenga la información $(-1,-1)$) solo se termina el llamado.

Luego si no hay razón para terminar el llamado se puede seguir con el camino.
 - Marcando.
 - Haciendo el llamado recursivo con la pista o información de esa casilla.
 - Desmarcando.

 #Optimización

 Como puedes ver al desmarcar deja libre las casillas para poder iniciar un nuevo camino a partir de ellas, puede hacerse la observación que si se empieza un camino desde la casilla $(i,j)$ y se puede llegar a la casilla destino pasando por $k$ casillas, puedes estar seguro que iniciando desde todas esas $k$ casillas llegaras a la casilla destino; analogamente si no se llega, desde ninguna de las $k$ casillas se podrá lograr. En estos casos ya no se desmarca y en caso de poderse en lugar de sumar 1 a la respuesta se sumaría $k$.

 También si en un camino de $q$ casillas te encuentras una casilla marcada, si desde la marcada se pudo, sumas $q$, de lo contrario con ninguna de las $q$ se puede llegar.

 Con estas observaciones se puede generar un algoritmo con complejidad $O(N^2)$.

