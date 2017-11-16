#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <ctime>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie();
    int casos[10] = {10, 25, 50, 100, 250, 500, 750, 1000, 1500, 2000};
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        stringstream ss;
        int v[casos[i]];
        ss << i + 1;

        ofstream in("../cases/" + ss.str() + ".in");
        ofstream out("../cases/" + ss.str() + ".out");

        for (int j = 0; j < casos[i]; j++)
            v[j] = rand();
        if (i == 9) //Caso especial
            sort(v, v + casos[i]);

        in << casos[i] << "\n";
        for (int j = 0; j < casos[i]; j++)
            in << v[j] << " ";
        out << "SI";

        in.close();
        out.close();
    }
}
