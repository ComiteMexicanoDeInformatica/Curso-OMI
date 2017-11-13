#include <cstdio>

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
	int left_1, bottom_1, right_1, top_1;
	int left_2, bottom_2, right_2, top_2;
	int left_intr, bottom_intr, right_intr, top_intr;

	int area_1, area_2, area_intr, area_total;

	/*Lee la entrada*/
	scanf("%d %d %d %d",&left_1,&bottom_1,&right_1,&top_1);
	scanf("%d %d %d %d",&left_2,&bottom_2,&right_2,&top_2);

	/*Calcula la interseccion de las coordenadas*/
	left_intr = max(left_1,left_2);
	bottom_intr = max(bottom_1,bottom_2);
	right_intr = min(right_1,right_2);
	top_intr = min(top_1,top_2);

	/*Calcula las areas de los rectangulos y la interseccion.*/
	area_1 = (right_1-left_1) * (top_1-bottom_1);
	area_2 = (right_2-left_2) * (top_2-bottom_2);
	if (left_intr < right_intr && bottom_intr < top_intr) {
		//La interseccion tiene sentido
		area_intr = (right_intr-left_intr) * (top_intr-bottom_intr);
	} else {
		//There doesn't seem to be an intersection
		area_intr = 0;
	}
	area_total = area_1 + area_2 - area_intr;

	/*Salida.*/
	printf("%d\n",area_total);
}
