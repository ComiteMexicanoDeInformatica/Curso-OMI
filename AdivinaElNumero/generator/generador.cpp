#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>

using namespace std;
void solucion(string entrada,string salida);
int main()
{

    /**generador de aleatorios**/
    std::random_device rd;
    std::mt19937 gen(rd());
    long long a=-(1LL<<62),b=-a;
    /**Ciclo para generar los casos en archivos .in**/
    std::uniform_int_distribution<long long> dis(a,b);
    for (int n=0; n<10; ++n)
    {
        ofstream in;
        stringstream ss;
        ss << n+1;
        string str = ss.str();
        in.open(str+".in");
        long long l =dis(gen), r=dis(gen);
        /** inicia tu codigo para generar el caso**/
        in << min(l,r) << " " << max(l,r);
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
    return;
    /**la solución del problema**/
}
