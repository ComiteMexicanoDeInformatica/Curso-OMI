#include <ctime>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using namespace std;
int main() {
  int recuerdame, semilla;
  int lim_random = 2000000;
  int lim_recuerdame = 9;
  srand(time(NULL));
  for (int i = 0; i < 20; ++i) {
    ofstream in;
    ofstream out;
    stringstream ss;
    ss << i + 1;
    string str = ss.str();
    in.open(str + ".in");
    out.open(str + ".out");
    recuerdame = rand() % lim_recuerdame + 1;
    semilla = rand() % lim_random + 1;

    in << recuerdame << " " << semilla << endl;
    out << "" << endl;
  }

  return 0;
}
