#include "Bucket.h"

int k[110];

void inicio(int N, int M[]) {
  for (int i = 0; i != N; i++) {
    k[M[i]]++;
  }
}
int pregunta(int x) { return k[x]; }
