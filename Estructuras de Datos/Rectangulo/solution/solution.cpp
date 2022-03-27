#include <stdio.h>

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stack>
using namespace std;
long long int hist[1000100];
long long int n;
stack<long long int> s;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> hist[i];
  }
  long long int area = 0;
  long long int tp;
  long long int areasuperior;

  long long int i = 0;
  while (i < n) {
    if (s.empty() || hist[s.top()] <= hist[i]) {
      s.push(i++);
    }

    else {
      tp = s.top();
      s.pop();
      areasuperior = hist[tp] * (s.empty() ? i : i - s.top() - 1);
      if (area < areasuperior) area = areasuperior;
    }
  }

  while (s.empty() == false) {
    tp = s.top();
    s.pop();
    areasuperior = hist[tp] * (s.empty() ? i : i - s.top() - 1);

    if (area < areasuperior) area = areasuperior;
  }
  cout << area;
}
