#include <bits/stdc++.h>

using namespace std;

#define NUM_CASOS 49

int r_max = 2000, c_max = 2000, k, tierra_max = 2500;

/* initialize random seed: */

int pos_rc[NUM_CASOS][2], pos_k_max[NUM_CASOS], plataforma[NUM_CASOS][2],
    tierra[NUM_CASOS];

int azar(int minimo, int maximo) {
  /* Regresa un n�mero al azar de m�nimo a maximo */
  if (minimo == maximo)
    return minimo;
  else
    return rand() % maximo + minimo;
}

void llenar_r() {
  /* Funci�n que llena los valores m�nimos y m�ximo para el rengl�n y la columna
   */

  int valor_r, valor_c;
  /* valor_r y valor_c es el valor que tiene la r y la c, tienen el mismo valor
  si el l�mite del m�nimo y el m�ximo es 1, pero diferente si los min/max son
  m�s que uno */

  for (int x = 0; x < NUM_CASOS; x++) {
    if (x < 4) {
      valor_r = azar(1, 1);
      valor_c = azar(1, 1);
    } else if (x < 7) {
      valor_r = azar(50, 50);
      valor_c = azar(50, 50);
    } else if (x == 13) {
      valor_r = azar(200, 200);
      valor_c = azar(400, 400);
    } else if (x == 14) {
      valor_r = azar(400, 400);
      valor_c = azar(600, 600);
    } else if (x == 15) {
      valor_r = azar(600, 600);
      valor_c = azar(100, 100);
    } else if (x == 16) {
      valor_r = azar(800, 800);
      valor_c = azar(1000, 1000);
    } else if (x == 17) {
      valor_r = azar(1000, 1000);
      valor_c = azar(800, 800);
    } else if (x == 18) {
      valor_r = azar(100, 100);
      valor_c = azar(2000, 2000);
    } else {
      valor_r = azar(10, 50);
      valor_c = azar(10, 50);
    }
    /* En la posici�n 0 se guarda r y en 1 se guarda c */
    pos_rc[x][0] = valor_r;
    pos_rc[x][1] = valor_c;
  }
}

void llenar_k() {
  /* Funci�n que llena los valores m�ximo para k (los d�as que pasan), el m�nimo
   * es 1 */

  for (int x = 0; x < NUM_CASOS; x++) {
    if (x < 2)
      pos_k_max[x] = 1;
    else if (x == 2 || x == 4 || x == 34 || x == 38)
      pos_k_max[x] = azar(1, 10000);
    else if (x == 3 || x == 5 || (x >= 7 && x <= 11) || (x >= 13 && x <= 17) ||
             x > 41)
      pos_k_max[x] = azar(1, 10000000);
    else if (x == 6 || x == 12 || (x >= 18 && x <= 24))
      pos_k_max[x] = 1;
    else if (x == 25)
      pos_k_max[x] = azar(1, 1000);
    else if (x == 26)
      pos_k_max[x] = azar(1, 2000);
    else if (x == 27)
      pos_k_max[x] = azar(1, 4000);
    else if (x == 28)
      pos_k_max[x] = azar(1, 8000);
    else if (x == 29)
      pos_k_max[x] = azar(1, 30);
    else if (x == 30)
      pos_k_max[x] = azar(1, 50);
    else if (x == 31)
      pos_k_max[x] = azar(1, 100);
    else if (x == 32)
      pos_k_max[x] = azar(1, 500);
    else if (x == 33 || x == 37)
      pos_k_max[x] = azar(1, 1000);
    else if (x == 34 || x == 38)
      pos_k_max[x] = azar(1, 10000);
    else if (x == 35 || x == 39)
      pos_k_max[x] = azar(1, 100000);
    else if (x == 36 || x == 40)
      pos_k_max[x] = azar(1, 1000000);
    else if (x >= 41)
      pos_k_max[x] = azar(1, 10000000);
  }
}

void llenar_pp() {
  /* Funci�n que llena la posici�n de la plataforma petrolera */

  for (int x = 0; x < NUM_CASOS; x++) {
    if (x <= 5) {
      plataforma[x][0] = 1;
      plataforma[x][1] = 1;
    } else if (x == 6 || x == 7 || x == 12 || x == 13) {
      plataforma[x][0] = pos_rc[x][0] / 2 + 1;
      plataforma[x][1] = pos_rc[x][1] / 2 + 1;
    } else if (x == 8 || x == 14) {
      plataforma[x][0] = azar(1, pos_rc[x][0]);
      plataforma[x][1] = 0;
    } else if (x == 9 || x == 15) {
      plataforma[x][0] = 0;
      plataforma[x][1] = azar(1, pos_rc[x][1]);
    } else if (x == 10 || x == 16) {
      plataforma[x][0] = pos_rc[x][0];
      plataforma[x][1] = azar(1, pos_rc[x][1]);
    } else if (x == 11 || x == 17) {
      plataforma[x][0] = azar(1, pos_rc[x][0]);
      plataforma[x][1] = pos_rc[x][1];
    } else if (x >= 18) {
      plataforma[x][0] = azar(1, pos_rc[x][0]);
      plataforma[x][1] = azar(1, pos_rc[x][1]);
    }
  }
}

void llenar_tierra() {
  /* Funci�n que llena los valores m�nimos y m�ximos de cuanta tierra puede
   * haber */

  for (int x = 0; x < NUM_CASOS; x++) {
    if (x <= 3 || (x >= 6 && x <= 11)) {
      tierra[x] = azar(0, 0);
    } else if (x == 4 || x == 5 || (x >= 12 && x <= 19)) {
      tierra[x] = azar(1, pos_rc[x][0] * pos_rc[x][1]);
    } else if (x == 20)
      tierra[x] = azar(1, 5);
    else if (x == 21)
      tierra[x] = azar(1, 10);
    else if (x == 22)
      tierra[x] = azar(1, 50);
    else if (x == 23)
      tierra[x] = azar(1, 100);
    else if (x == 24)
      tierra[x] = azar(1, 60);
    else if (x == 25)
      tierra[x] = azar(99, 101);
    else if (x <= 37)
      tierra[x] = azar(91, 401);
    else if (x <= 36)
      tierra[x] = azar(191, 200);
    else
      tierra[x] = azar(191, 200);
  }
}
void muestra() {
  cout << "#         R      C       K         $      Tierra" << endl;
  for (int x = 0; x < NUM_CASOS; x++) {
    printf("%2d  ", x);
    printf("%7d  ", pos_rc[x][0]);
    printf("%5d  ", pos_rc[x][1]);
    printf("%5d  ", pos_k_max[x]);
    printf("%5d  ", plataforma[x][0]);
    printf("%5d  ", plataforma[x][1]);
    printf("%5d  ", tierra[x]);
    printf("\n");
  }
}
void generar(int _caso, int _min, int _max) {
  int _r, _c, _k, _tierra = tierra[_caso], _azarr, _azarc;
  _r = pos_rc[_caso][0];
  _c = pos_rc[_caso][1];
  _k = pos_k_max[_caso];
  cout << _r << " " << _c << " " << _k << endl;

  char plataforma[_r][_c];

  ///    #    Tierra
  ///    .    Mar

  /// Rellenar

  for (int x = 0; x < _r; x++) {
    for (int y = 0; y < _c; y++) {
      /* if (_tierra==0)
          plataforma[x][y]='.';
      else
      {
          if (y%2==0) plataforma[x][y]='#';
          else if (y%4==1 && x==_r-1) plataforma[x][y]='#';
          else if (y%4==3 && x==0) plataforma[x][y]='#';
          else plataforma[x][y]='.';
      } */
      plataforma[x][y] = '.';
    }
  }

  while (_tierra--) {
    do {
      _azarr = azar(1, _r);
      _azarc = azar(1, _c);
      _azarr--;
      _azarc--;
    } while (plataforma[_azarr][_azarc] != '.');
    plataforma[_azarr][_azarc] = '#';
  }

  /// Mostrar
  for (int x = 0; x < _r; x++) {
    for (int y = 0; y < _c; y++) {
      cout << plataforma[x][y];
    }
    cout << endl;
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  srand(time(NULL));

  /* Los rangos de las consideraciones est�n en el archivo details.txt
     que est� en raiz de la carpeta del problema */

  llenar_r();      /* Llena los valores del rengl�n y la columna */
  llenar_k();      /* Llena los valores de k m�ximos */
  llenar_pp();     /* Indica la posici�n de la plataforma petrolera */
  llenar_tierra(); /* Valores minimo y m�ximo de tierra que puede haber */
  /// muestra();
  generar(42, 1, 1);
  return 0;
}
