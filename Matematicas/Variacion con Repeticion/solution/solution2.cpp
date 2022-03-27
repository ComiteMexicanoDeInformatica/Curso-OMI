#include <stdio.h>

#include <iostream>
using namespace std;
long long int troy[50];
int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  long long int t = 1;
  for (int i = 0; i < b; i++) {
    troy[i] = t;
    t *= a;
  }
  for (int i = b - 1; i != -1; i--) {
    char t = 'a';
    while (c > troy[i]) {
      t++;
      c -= troy[i];
    }
    cout << t;
  }
}
