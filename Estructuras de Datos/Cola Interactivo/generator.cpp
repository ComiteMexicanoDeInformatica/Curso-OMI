#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>
#include <queue>
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

	    if (n == 9){
		    ins = ins % 3;
	    }

            if(ins%2==0)
            {
                in << "a" << " " << dis2(gen) << endl;
		cnt++;
            }
            else
            {
                in << "s" << endl;
		cnt--;
            }
        }

        in.close();
    }
}
