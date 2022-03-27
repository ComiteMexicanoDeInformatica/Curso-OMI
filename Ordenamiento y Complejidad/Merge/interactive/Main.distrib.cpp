#include <algorithm>
#include <iostream>

#include "MergeSortInteractivo.h"
using namespace std;
int lista[10000];
bool arrayOrdenado(int arr[], int n) {
  if (n == 0 || n == 1) return true;

  for (int i = 1; i < n; i++)
    if (arr[i - 1] > arr[i]) return false;
  return true;
}

void combinar(int izquierda, int mitad, int derecha) {
  int i, j, k, inversiones = 0;
  int n1 = mitad - izquierda + 1;
  int n2 = derecha - mitad;
  int L[n1], R[n2];
  for (i = 0; i < n1; i++) L[i] = lista[izquierda + i];
  for (j = 0; j < n2; j++) R[j] = lista[mitad + 1 + j];
  i = 0;
  j = 0;
  k = izquierda;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      lista[k] = L[i];
      i++;
    } else {
      lista[k] = R[j];
      j++;
      inversiones += mitad + 1 - i;
    }
    k++;
  }

  while (i < n1) {
    lista[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    lista[k] = R[j];
    j++;
    k++;
  }
}

int main() {
  int tam;
  cin >> tam;
  for (int i = 0; i < tam; i++) {
    cin >> lista[i];
    check[i] = lista[i];
  }
  mezclar(0, tam - 1);
  cout << arrayOrdenado(lista, tam) << endl;
}
