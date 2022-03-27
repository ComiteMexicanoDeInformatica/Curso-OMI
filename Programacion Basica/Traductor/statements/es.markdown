En un lejano planeta coexisten dos culturas ancestrales, la Numírica y la Enteral.
Pese a sus similitudes culturales, se comunican en lenguajes totalmente diferentes.

Por ejemplo, en numírico podrías decir "hola" con "53134" mientras que en enteral sería "46952".

Tu tarea será realizar traducciones entre ambos idiomas.

# Problema

Escribe un programa que pueda traducir entre los dos lenguajes,
dada la lista de palabras de un diccionario.

# Entrada

La primer linea tendrá dos enteros: $d$ y $w$.

Las siguientes $d$ lineas representan las traducciones del diccionario,
cada una con un par de enteros: $n_i$ y $e_i$, separados por un espacio.
$n_i$ representa una palabra en numírico y $e_i$ su traducción a enteral.
Puedes estar seguro de que las palabras no se repetirán en el diccionario.

Las siguientes $w$ líneas contienen un entero,
representando la palabra en numírico que tendrás que traducir.

# Salida

Por cada palabra a traducir, deberás imprimir una línea que contenga su respectiva traducción
en enteral. Si una palabra no tiene traducción debes imprimir `C?` en esa línea.

# Ejemplo

||input
5 6
2 71
3 556
140 19
87 555
71 3
140
2
87
2
3
4
||output
19
71
555
71
556
C?
||description
Como la palabra `4` no tiene una traducción a enteral, se imprime `C?`.
||end

# Límites

- $0 \leq d, w \leq 1,000$
- $0 \leq n_{i}, e_{i} \leq 10,000$
