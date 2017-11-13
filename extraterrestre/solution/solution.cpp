#include <iostream>

using namespace std;

int min(int a, int b) {
	//Toma dos numeros y regresa el mas pequeno
	if (a < b) {
		return a;
	} else {
		return b;
	}
}
int max(int a, int b) {
	//Toma dos numeros y regresa el mas grande
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main() {
	int izq_1, abajo_1, der_1, arriba_1;
	int izq_2, abajo_2, der_2, arriba_2;
	int izq_intr, abajo_intr, der_intr, arriba_intr;

	int area_1, area_2, area_intr, area_total;

	/*Lee la entrada*/
	cin >> izq_1 >> abajo_1 >> der_1 >> arriba_1;
	cin >> izq_2 >> abajo_2 >> der_2 >> arriba_2;

	/*Calcula la interseccion de las coordenadas*/
	izq_intr = max(izq_1,izq_2);
	abajo_intr = max(abajo_1,abajo_2);
	der_intr = min(der_1,der_2);
	arriba_intr = min(arriba_1,arriba_2);

	/*Calcula las areas de los rectangulos y la interseccion.*/
	area_1 = (der_1-izq_1) * (arriba_1-abajo_1);
	area_2 = (der_2-izq_2) * (arriba_2-abajo_2);
	if (izq_intr < der_intr && abajo_intr < arriba_intr) {
		//La interseccion tiene sentido
		area_intr = (der_intr-izq_intr) * (arriba_intr-abajo_intr);
	} else {
		//There doesn't seem to be an intersection
		area_intr = 0;
	}
	area_total = area_1 + area_2 - area_intr;

	/*Salida.*/
	cout << area_total << endl;
}
