#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>
#include <stack>
#include <limits>
using namespace std;
void solucion(string entrada,string salida);
int main()
{
    int num;

    /**generador de aleatorios**/
    std::random_device rd;
    std::mt19937 gen(rd());

    uniform_int_distribution<> dis(25,10000);

    /**Ciclo para generar los casos en archivos .in**/
    uniform_int_distribution<> dis1(0,1);
    uniform_int_distribution<> dis2(0,100000);

    for (int n=0; n<10; ++n)
    {
        ofstream in;
        stringstream ss;
        ss << n+1;
        string str = ss.str();
        in.open(str+".in");

        num = dis(gen);
        in << num << endl;
        for(int i=0; i<num; i++)
        {
            int ins = dis1(gen);

            if(ins%2==0)
            {
                in << "a" << " " << dis2(gen) << endl;
            }
            else
            {
                in << "s" << endl;
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
    std::ifstream inpt(entrada);
    std::streambuf *cinbuf = std::cin.rdbuf();
    std::cin.rdbuf(inpt.rdbuf());

    std::ofstream out(salida);
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    /**termina la redirección de cin y cout**/

    /**la solución del problema**/
    stack<int> p;

    while(!p.empty()) p.pop();
    int n_,val_;
    char c_;

    cin >> n_;

    for(int i=0; i<n_; i++)
    {
        cin >> c_ >> c_;
        if(c_=='a')
        {
            cin >> val_;
            p.push(val_);
        }
        if(c_=='s')
        {
            if(p.empty())
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout << p.top() << endl;
                p.pop();
            }
        }
    }
    cout<<endl;
}
