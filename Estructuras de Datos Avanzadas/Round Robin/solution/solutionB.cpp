#include <iostream>
#include <queue>

using namespace std;

struct proceso {
  int tiempo, id;
};
queue<proceso> waiting;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, k, t_aux, id_aux;
  proceso aux;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> id_aux >> t_aux;

    aux.tiempo = t_aux;
    aux.id = id_aux;

    waiting.push(aux);
  }

  while (!waiting.empty()) {
    if (waiting.front().tiempo <= k) {
      cout << waiting.front().id << endl;
    } else {
      waiting.front().tiempo -= k;
      waiting.push(waiting.front());
    }

    waiting.pop();
  }
}
