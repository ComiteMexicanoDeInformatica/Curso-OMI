#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>

using namespace std;
void solucion(string entrada,string salida);
long long mcd(long long a,long long b);
int main()
{
    /**generador de aleatorios**/
    std::random_device rd;
    std::mt19937 gen(rd());

    /**Ciclo para generar los casos en archivos .in**/
    for (int n=0; n<10; ++n)
    {
        ofstream in;
        stringstream ss;
        ss << n+1;
        string str = ss.str();
        in.open(str+".in");
        /** inicia tu codigo para generar el caso**/
        std::uniform_int_distribution<> dis(500,100000);
        std::uniform_int_distribution<long long> dis1(1,1000000000000000000);

        int num_pairs = dis(gen);

        in << num_pairs << endl;

        for(int i=0; i < num_pairs; i++)
        {
            long long x,y,m_;
            do
            {
                x = dis1(gen);
                std::uniform_int_distribution<long long> dis2(1,(long long)sqrt(x));
                y = dis2(gen);
                if(x < 0 ) x=-x;
                if(y < 0 ) y=-y;
                m_=mcd(x,y);
            }
            while(m_*m_<(long long)sqrt(min(x,y)));
            in << min(x,y) << " " << max(x,y) << endl;
        }
        /**termina tu código para generar el caso**/

        in.close();
        solucion(str+".in",str+".out");

    }
    return 0;
}
long long mcd(long long a, long long b)
{
    if(a == 0) return b;
    return mcd(b%a, a);
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

    /**la solución del problema**/
    int n_;
    long long x_,y_,MCD_;

    cin >> n_;
    for(int i=0; i<n_; i++)
    {
        cin >> x_ >> y_;
        MCD_ = mcd(x_,y_);
        cout << x_ / MCD_ << " " << y_ / MCD_ << endl;
    }
}
