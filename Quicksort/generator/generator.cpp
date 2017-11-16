#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <ctime>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie();
    int casos[10] = {10, 25, 50, 75, 100, 250, 500, 750, 900, 1000};
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        stringstream ss;
        ss << i + 1;

        ofstream in("../cases/" + ss.str() + ".in");
        ofstream out("../cases/" + ss.str() + ".out");

        in << casos[i] << "\n";
        for (int j = 0; j < casos[i]; j++)
            in << rand() << " ";
        out << "SI";

        in.close();
        out.close();
    }
}
