#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int carga_peso[12];

int carga_carguero[12];
int carguero_count[4];

int answer = -1;

void recurse(int carga) {
	if (carga == 12) {
		int carguero_carga[4] = {0,0,0,0};
		for (int i = 0; i < 12; i++) {
			carguero_carga[carga_carguero[i]] += carga_peso[i];
		}
		int T = max(max(carguero_carga[0], carguero_carga[1]),
		            max(carguero_carga[2], carguero_carga[3]));
		int t = min(min(carguero_carga[0], carguero_carga[1]),
		            min(carguero_carga[2], carguero_carga[3]));

		if (answer == -1 || T - t < answer) {
			answer = T - t;
		}
		return;
	}

	for (int carguero = 0; carguero < 4; carguero++) {
		if (carguero_count[carguero] < 3) {
			carga_carguero[carga] = carguero;
			carguero_count[carguero]++;

			recurse(carga+1);
			carguero_count[carguero]--;
		}
	}
}

int main() {
	for (int i = 0; i < 12; i++) {
		cin >> carga_peso[i];
	}

	recurse(0);

	cout << answer << '\n';
}
