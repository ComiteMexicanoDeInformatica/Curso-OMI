Detectando Triples

De acuerdo a la redacción, un \textit{triple} es cualquier múltiplo de 3. Desde nuestra experiencia, esperamos detectar triples usando o la división o el módulo.

Para futuras consideraciones, diremos que un número es múltiplo de 3 exactamente al haber un residuo de 0 cuando se divide entre 3. Aquí tenemos un pseudo-código

if (el_numero % 3 == 0) {
	// el_numero es triple
} else {
	// el_numero no es triple
}

... así detectaremmos correctamente si un número dado es triplo

# Contando y coleccionando triples

Vamos a proponernos un objetivo intermedio de \textit{coleccionar todas las posiciones triples de un arreglo}.

(Por qué? Sería muy simple mostrar todas las posiciones triples mientras leemos la entrada. Sin embargo, el problema nos pide que empecemos mostrando el número de triples. No lo sabemos hasta que leemos toda la entrada. Así que necesitamos donde guardar el resultado obtenido. Además, es una técnica muy útil colocar los resultados previos en algún lugar utilizarlos posteriormente).

Asumiremos que ya leimos todos los números en un arreglo:

for (int i = 0; i < nNumeros; i++) {
	fscan("%d",&triples[i]);
}

// FALTA: Contar y coleccionar los triples
// FALTA: Escribir la salida

Vamos a declarar un nuevo arreglo ``triples`` que va a almacenar todos los números triples.

int triples[MAX_N];

No sabemos cuantos números triples habrá, asi es que estaremos previendo y creando suficiente espacio para almacenar $n$ diferentes lugares de triples. No será necesario utilizar todo el espacio, pero es mejor apartar más espacio que el suficiente para que no nos quedemos sin espacio. (Declarando un arreglo muy pequeño y tratando de almacenar más valores, nos llevará a errores o algo peor.)

Ahora nuestro código contará y coleccionará los triples, podrá verse como lo siguiente:

for (int i = 0; i < nNumeros; i++) {
	if (triples[i] % 3 == 0) {
		// FALTA: el número es un triple, ahora qué?
	}
}

Aquí viene la parte interesante. Como llenamos el arreglo de triples correctamente?

Una forma de hacer eso es elegir un caso en específico, o un punto específico durante el ciclo, y preguntarnos \textit{qué debería estar haciendo nuestro programa en éste momento?} Imaginemos que estamos a la mitad del programa y ya hemos encontrado 6 triples, en la posición segunda, cuarta, quinta, novena, doceava y treceava en el arreglo, respectivamente.

<center>triples = [2, 4, 5, 9, 12, 13, ???, ???, ...]</center>

Los signos \textit{???} son los restantes 49,994 elementos del arreglo en el cual hemos apartado espacio pero no lo estamos usando en éste momento. Dependiendo de varios factores de como se compile el programa y corra, éstos \textit{???} podrían ser cualquier cosa: talvez ceros, talvez basura al azar, o quizás {17,18,19, ...}.

