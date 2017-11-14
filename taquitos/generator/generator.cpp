#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>
#include <math.h>
#include <limits>
#include <iomanip>

using namespace std;
void solucion(string entrada,string salida);
int main()
{

    /**Arreglo para definir los limites de cada caso**/
    int casos[10] = {5,50,100,200,500,1000,1500,2500,5000,10000};

    /**generador de aleatorios**/
    std::random_device rd;
    std::mt19937 gen(rd());

    /**Ciclo para generar los casos en archivos .in**/
    std::uniform_int_distribution<> disInt(1 , INT_MAX);
    std::poisson_distribution<> dis4(1);
    std::uniform_int_distribution<> dis1000(1 , 1000);
    for (int n=0; n<10; ++n)
    {
        ofstream in;
        stringstream ss;
        ss << n+1;
        string str = ss.str();
        in.open(str+".in");
        in<<casos[n]<<endl;


        int m=0;
        while(m<casos[n])
        {
            int operacion,t;
            operacion=dis4(gen);
            if(operacion<0 or operacion>=4)continue;
            operacion++;
            m++;
            switch(operacion)
            {
                case 1:
                    t=dis1000(gen);
                    in<<operacion<<" "<<t<<endl;
                    break;
                case 2:case 3:case 4:
                    in<<operacion<<endl;
                    break;
            }

        }
        /**termina tu código para generar el caso**/
        in.close();
        solucion(str+".in",str+".out");

    }
    return 0;
}
/** función que recibe el nombre del archivo .in y el archivo .out**/
void solucion(string entrada,string salida)
{

    /**inicia la redirección de cin y cout. NO BORRAR**/
    std::ifstream in(entrada);
    std::streambuf *cinbuf = std::cin.rdbuf();
    std::cin.rdbuf(in.rdbuf());

    std::ofstream out(salida);
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    /**termina la redirección de cin y cout**/

    #define maxcola 10000
    struct cola_circular
    {
        int v[maxcola];
        int frente=0, final=-1, cont=0;
        void insertar(int dato)
        {
            final=(final+1)%maxcola;
            v[final]=dato;
            cont++;
        }
        int consulta()
        {
            return v[frente];
        }
        void extraer()
        {
            frente=(frente+1)%maxcola;
            cont--;
        }
        bool vacia()
        {
            return cont==0;
        }
        bool llena()
        {
            return cont==maxcola;
        }
        int longitud()
        {
            return cont;
        }
    };
    cola_circular fila;
    int n, t, oper,venta=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>oper;
        switch(oper)
        {
        case 1:
            cin>>t;
            if(!fila.llena())
                fila.insertar(t);
            break;
        case 2:
            if(!fila.vacia())
            {
                venta+=fila.consulta();
                fila.extraer();
            }
            break;
        case 3:
            cout<<fila.longitud()<<endl;
            break;
        case 4:
            cout<<venta<<endl;
            break;
        }
    }

}
