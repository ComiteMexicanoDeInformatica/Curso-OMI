#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>

using namespace std;

int main()
{
    int s[10] = {97,195,390,781,1562,3125,6250,12500,25000,50000};

    std::random_device rd;
    std::mt19937 gen(rd());

    for (int n=0; n<10; ++n) {
        ofstream in;
        ofstream out;

        stringstream ss;
        ss << n;
        string str = ss.str();


        in.open(str+".in");
        out.open(str+".out");

        std::uniform_int_distribution<> dis(-40000 * s[n] , 40000 * s[n]);

        in << s[n] << endl;

        int c = 0;
        int a[50000];

        for(int i = 0; i < s[n]; i++) {
            int r = dis(gen);
            in << r << endl;
            if (r % 3 == 0) {
                a[c] = i+1;
                c++;
            }
        }

        if (c > 0) {
            out << c << std::endl;
            for( int i = 0; i < c; i++) {
                out << a[i] << " ";
            }
        } else {
            out << "no hay triples";
        }
    }
    return 0;
}
