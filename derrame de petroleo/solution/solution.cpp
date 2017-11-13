	/* Petróleo
 * AIO 2010
 * Solución de muestra C ++
 * /

#include <iostream>
#include <fstream>
usando namespace std;

/ * Estos son los límites definidos en la declaración del problema. * /
const int MAX_R = 2000;
const int MAX_C = 2000;

/ * Los archivos de entrada y salida. * /
FILE * input_file;
FILE * output_file;

/ *
 * num_rows y num_cols contendrán el alto y el ancho del mapa,
 * respectivamente.
 * /
int num_rows;
int num_cols;

/ *
 * num_days contendrá la cantidad de días que necesita para realizar el
 * simulación.
 * /
int num_days;

mapa de char [2] [MAX_R] [MAX_C];
/ * Las celdas adyacentes a (x, y) se encuentran en (x + dx [i], y + dy [i]) para 0 <= i <4. * /
int dx [] = {1, -1, 0, 0}, dy [] = {0, 0, 1, -1};

color vacío (int day, int r, int c) {
    if (r <0 || c <0 || r> = num_rows || c> = num_cols) {
        regreso;
    }
    if (mapa [(día + 1)% 2] [r] [c]! = '.') {
        regreso;
    }
    mapa [día% 2] [r] [c] = '*';
}

int main (void) {

    / * Abre los archivos de entrada y salida. * /
    ifstream inputFile ("oilin.txt");
    ofstream outputFile ("oilout.txt");

    / *
     * Lea la altura y el ancho del mapa desde el archivo de entrada, y el número
     * de días para simular.
     * /
    inputFile >> num_rows >> num_cols >> num_days;

    for (int r = 0; r <num_rows; r ++) {
        for (int c = 0; c <num_cols; c ++) {
            inputFile >> map [0] [r] [c];
        }
    }

    / * Encuentra el derrame. * /
    for (int d = 0; d <= num_days; d ++) {
        for (int r = 0; r <num_rows; r ++) {
            for (int c = 0; c <num_cols; c ++) {
                mapa [(d + 1)% 2] [r] [c] = mapa [d% 2] [r] [c];
            }
        }
        for (int r = 0; r <num_rows; r ++) {
            for (int c = 0; c <num_cols; c ++) {
                if (map [d% 2] [r] [c] == '*' || map [d% 2] [r] [c] == '$') {
                    para (int i = 0; i <4; i ++) {
                        color (d + 1, r + dx [i], c + dy [i]);
                    }
                }
            }
        }
    }


    / * Escribe la respuesta al archivo de salida. * /
    for (int r = 0; r <num_rows; r ++) {
        for (int c = 0; c <num_cols; c ++) {
            outputFile << map [(num_days)% 2] [r] [c];
        }
        outputFile << '\ n';
    }

    / * Finalmente, cierre los archivos de entrada / salida. * /
    inputFile.close ();
    outputFile.close ();

    return 0;
}