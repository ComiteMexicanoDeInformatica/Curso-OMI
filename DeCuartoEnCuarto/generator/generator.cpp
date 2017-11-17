#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>
#include <utility>
#define p1 first
#define p2 second
using namespace std;

pair< int,int > G[100010];
int maxi,nodo_fin;
bool use[100010];

void solucion(string entrada,string salida);

void dfs(int nd,int prof){
    if(use[nd]) return;
    use[nd]=true;
    if(prof > maxi){
        maxi = prof;
        nodo_fin = nd;
    }
    dfs(G[nd].p1,prof+1);
    dfs(G[nd].p2,prof+2);
    return;
}
int main()
{
    /**Arreglo para definir los limites de cada caso**/
    int casos[10] = {1000,2500,5000,10000,25000,50000,70000,80000,90000,100000};

    int indg[100010],ni,nf,indg_ni=-1,indg_nf=20;

    /**generador de aleatorios**/
    std::random_device rd;
    std::mt19937 gen(rd());

    /**Ciclo para generar los casos en archivos .in**/
    for (int n=0; n<10; ++n)
    {
        for(int i=0; i<=100005; i++){
            indg[i]=0;
            G[i].p1 = G[i].p2 = 0;
        }
        ofstream in;
        stringstream ss;
        ss << n+1;
        string str = ss.str();
        in.open(str+".in");
        std::uniform_int_distribution<> dis(1 , casos[n]);
        /** inicia tu codigo para generar el caso**/
        for(int i=1; i<=casos[n]; i++)
        {
            int nd,ant=-1;
            for(int j=0; j<2; j++)
            {
                do
                {
                    nd=dis(gen);
                }
                while(nd==ant || indg[nd]>10 || nd==i);
                (j==0)?G[i].p1=nd:G[i].p2=nd;
                indg[nd]++;
                ant=nd;
            }
        }
        for(int i=1; i<=casos[n]; i++){
            if(indg[i] > indg_ni){
                indg_ni = indg[i];
                ni=i;
            }
            if(indg[i] < indg_nf){
                indg_nf = indg[i];
                nf = i;
            }
        }
        maxi=-1;
        for(int i=0; i<=casos[n]; i++) use[i]=false;
        dfs(ni,0);
        in << casos[n] << " " << ni << " "<< nodo_fin <<"\n";

        for(int i=1; i<=casos[n]; i++){
                in << G[i].p1 << " " << G[i].p2;
        }
        /**termina tu código para generar el caso**/

        in.close();
    }
    return 0;
}
