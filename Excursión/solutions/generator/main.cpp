#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    srand (time(NULL));
    int limits[10] = {17, 34, 78, 156, 312, 625, 1250, 2500, 5000, 10000};
    for (int i = 0; i < 10; i++){

        ofstream file;
        ofstream out;

        stringstream ss;
        ss << i;
        string str = ss.str();


        file.open(str+".in");
        out.open(str+".out");
        int n = rand() % limits[i] + 2;
        int q = rand() % limits[i] + 2;

        int arr[10001];

        file << n << " " << q << endl;

        for (int j = 0; j < n; j++){
            arr[j] = rand();
            file << arr[j] << endl;
        }

        for (int j = 0; j < q; j++){
            int r = rand() % n + 1;
            file << r << endl;
            out<< arr[r-1] << endl;
        }

        out.close();
        file.close();
    }

    cout << "done" << endl;
    return 0;
}
