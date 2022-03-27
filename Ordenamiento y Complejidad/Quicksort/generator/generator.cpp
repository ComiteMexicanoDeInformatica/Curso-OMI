#include <algorithm>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie();
  int casos[10] = {10, 25, 50, 75, 100, 250, 500, 1000, 2000, 5000};
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    stringstream ss;
    ss << i + 1;

    ofstream in("../cases/" + ss.str() + ".in");
    ofstream out("../cases/" + ss.str() + ".out");

    in << casos[i] << "\n";
    for (int j = 0; j < casos[i]; j++) in << (i < 9 ? rand() : 1) << " ";
    out << "1\n";

    in.close();
    out.close();
  }
}
