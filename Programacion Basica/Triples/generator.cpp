#include <fstream>
#include <random>
#include <sstream>

using namespace std;

int main() {
  int s[10] = {76, 235, 390, 3543, 6787, 13125, 16250, 22500, 25000, 50000};

  random_device rd;
  mt19937 gen(rd());

  for (int n = 0; n < 10; n++) {
    ofstream in;
    ofstream out;

    stringstream ss;
    ss << n + 2;  // Para agregar manualmente los casos de ejemplo
    string str = ss.str();

    in.open(str + ".in");
    out.open(str + ".out");

    uniform_int_distribution<> dis(0, 40000 * s[n]);

    in << s[n] << endl;

    int c = 0;
    int a[50000];

    for (int i = 0; i < s[n]; i++) {
      int r = dis(gen);
      in << r << endl;
      if (r % 3 == 0) {
        a[c] = i + 1;
        c++;
      }
    }

    if (c > 0) {
      out << c << endl;
      for (int i = 0; i < c; i++) {
        out << a[i] << " ";
      }
    } else {
      out << "No hay triples.";
    }
  }
  return 0;
}
