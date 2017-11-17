#include"Bucket.h"

int Cubeta[101];

void inicio(int N, int M[]) {
    for (int i = 0; i < N; i++)
        Cubeta[M[i]]++;
}

int pregunta(int x) {
    return Cubeta[x];
}
