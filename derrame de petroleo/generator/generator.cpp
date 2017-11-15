#include <bits/stdc++.h>

using namespace std;

#define NUM_CASOS 49

int r_max=2000, c_max=2000, k, tierra_max=2500;

/* initialize random seed: */

int pos_rc[NUM_CASOS][2], pos_k_max[NUM_CASOS], plataforma[NUM_CASOS][2], tierra[NUM_CASOS];

int azar (int minimo, int maximo)
{
    /* Regresa un número al azar de mìnimo a maximo */
    if (minimo==maximo) return minimo;
    else return rand() % maximo + minimo;
}

void llenar_r()
{
    /* Función que llena los valores mínimos y máximo para el renglón y la columna */

    int valor_r, valor_c;
    /* valor_r y valor_c es el valor que tiene la r y la c, tienen el mismo valor si el límite
    del mínimo y el máximo es 1, pero diferente si los min/max son más que uno */

    for (int x=0; x<NUM_CASOS; x++)
    {
        if (x<6) { valor_r=azar(1,1); valor_c=azar(1,1); }
        else if (x<18) { valor_r=azar(2000,2000); valor_c=azar(2000,2000); }
        else { valor_r=azar(10,50); valor_c=azar(10,50); }
        /* En la posición 0 se guarda r y en 1 se guarda c */
        pos_rc[x][0]=valor_r;
        pos_rc[x][1]=valor_c;
    }
}

void llenar_k()
{
    /* Función que llena los valores máximo para k (los días que pasan), el mínimo es 1 */

    for (int x=0; x<NUM_CASOS; x++)
    {
        if (x<2) pos_k_max[x]=1;
        else if (x==2 || x==4 || x==34 || x==38) pos_k_max[x]=azar(1,10000);
        else if (x==3 || x==5 || (x>=7 && x<=11) || (x>=13 && x<=17) || x>41)
            pos_k_max[x]=azar(1,10000000);
        else if (x==6 || x==12 || (x>=18 && x<=26)) pos_k_max[x]=1;
        else if (x==27) pos_k_max[x]=azar(1,5);
        else if (x==28) pos_k_max[x]=azar(1,10);
        else if (x==29) pos_k_max[x]=azar(1,30);
        else if (x==30) pos_k_max[x]=azar(1,50);
        else if (x==31) pos_k_max[x]=azar(1,100);
        else if (x==32) pos_k_max[x]=azar(1,500);
        else if (x==33 || x==37) pos_k_max[x]=azar(1,1000);
        else if (x==34 || x==38) pos_k_max[x]=azar(1,10000);
        else if (x==35 || x==39) pos_k_max[x]=azar(1,100000);
        else if (x==36 || x==40) pos_k_max[x]=azar(1,1000000);
        else if (x>=41) pos_k_max[x]=azar(1,10000000);
    }
}

void llenar_pp()
{
    /* Función que llena la posición de la plataforma petrolera */

    for (int x=0; x<NUM_CASOS; x++)
    {
        if (x<=5) {
            plataforma[x][0]=1;
            plataforma[x][1]=1;
        }
        else if (x==6 || x==7 || x==12 || x==13) {
            plataforma[x][0]=pos_rc[x][0]/2+1;
            plataforma[x][1]=pos_rc[x][1]/2+1;
        }
        else if (x==8 || x==14) {
            plataforma[x][0]=azar(1,pos_rc[x][0]);
            plataforma[x][1]=0;
        }
        else if (x==9 || x==15) {
            plataforma[x][0]=0;
            plataforma[x][1]=azar(1,pos_rc[x][1]);
        }
        else if (x==10 || x==16) {
            plataforma[x][0]=pos_rc[x][0];
            plataforma[x][1]=azar(1,pos_rc[x][1]);
        }
        else if (x==11 || x==17) {
            plataforma[x][0]=azar(1,pos_rc[x][0]);
            plataforma[x][1]=pos_rc[x][1];
        }
        else if (x>=18) {
            plataforma[x][0]=azar(1,pos_rc[x][0]);
            plataforma[x][1]=azar(1,pos_rc[x][1]);
        }
    }
}

void llenar_tierra()
{
    /* Función que llena los valores mínimos y máximos de cuanta tierra puede haber */

    for (int x=0; x<NUM_CASOS; x++)
    {
        if (x<=3 || (x>=6 && x<=11)) { tierra[x]=azar(0,0); }
        else if (x==4 || x==5 || (x>=12 && x<=17)) {
            tierra[x]=azar(1,pos_rc[x][0]*pos_rc[x][1]); }
        else if (x==18) tierra[x]=azar(1,1);
        else if (x==19) tierra[x]=azar(1,2);
        else if (x==20) tierra[x]=azar(1,5);
        else if (x==21) tierra[x]=azar(1,10);
        else if (x==22) tierra[x]=azar(1,50);
        else if (x==23) tierra[x]=azar(1,100);
        else if (x==24) tierra[x]=azar(1,500);
        else if (x==25) tierra[x]=azar(1,2500);
        else if (x==26) tierra[x]=azar(pos_rc[x][0]*pos_rc[x][1],pos_rc[x][0]*pos_rc[x][1]);
        else if (x<=29) tierra[x]=azar(1,200);
        else if (x<=36) tierra[x]=azar(1,500);
        else if (x<=40) tierra[x]=azar(1,1500);
        else tierra[x]=azar(1,500);
    }
}
void muestra()
{
    cout << "#         R      C       K         $      Tierra" << endl;
    for (int x=0; x<NUM_CASOS; x++)
    {
        printf("%2d  ",x);
        printf("%7d  ",pos_rc[x][0]);
        printf("%5d  ",pos_rc[x][1]);
        printf("%5d  ",pos_k_max[x]);
        printf("%5d  ",plataforma[x][0]);
        printf("%5d  ",plataforma[x][1]);
        printf("%5d  ",tierra[x]);
        printf("\n");
    }
}
void generar(int _caso, int _min, int _max)
{
    cout <<
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    srand (time(NULL));

    /* Los rangos de las consideraciones están en el archivo details.txt
       que está en raiz de la carpeta del problema */

    llenar_r(); /* Llena los valores del renglón y la columna */
    llenar_k(); /* Llena los valores de k máximos */
    llenar_pp(); /* Indica la posición de la plataforma petrolera */
    llenar_tierra(); /* Valores minimo y máximo de tierra que puede haber */
    muestra();
    generar(1,1,1);
    return 0;
}
