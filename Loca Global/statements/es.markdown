# Loca Global
# Descripción
Te encargaron escribir un programa que ilustre el concepto de alcance de los identificadores. 
El único identificador que aparece en TODO el programa es una variable car, de tipo char.
El programa debe mostrar 3 alcances: Global, alcance local de bloque, alcance local (de función).


# Entrada

Una linea con 3 caracteres separados por un espacio.
Los caracteres puden ser dígitos, letras minúsculas y letras mayúsculas.

# Salida

Cinco lineas, con un caracter cada una. Los caracteres que pueden aparecer a la salida son:
dígitos, letras minúsculas y letras mayúsculas además los caracteres ':', '\','{','|', ';', '['

# Ejemplo

||input
z Z 9
||output
Z
z
|
:
{

||input
9 z Z
||output
z
9
;
[
:
||input
a A 8
||output
A
a
c
9
b
||end

# Límites

* Entrada: dígitos, letras minúsculas y mayúsculas.
* Salida: dígitos, letras minúsculas y mayúsculas y los caracteres ':', '\','{','|', ';', '['
