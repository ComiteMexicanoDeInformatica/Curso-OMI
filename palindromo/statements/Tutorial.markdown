#Palíndromo

La idea es tratar de identificar a una serie de caracteres (números y/o letras) como palíndromos. Un palíndromo es una cadena que se lee igual de izquierda a derecha que de derecha a izquierda. Por ejemplo, las palabras “salas”, “Ana” y “rallar” son palíndromos. 

El método para resolver este problema es dar de entrada la cadena a determinar sí es palíndromo, determinar la longitud de la cadena de caracteres de entrada.

Un enfoque alternativo es hacer coincidir un prefijo de la cadena con el reverso de un postfijo de la misma longitud. 

El carácter en blanco como entrar no se considera como palíndromo.
Si la cadena está hecha de cero letras o de una letra y dígitos entonces puede ser palíndromo.
De lo contrario, compara la primera y la última letra de la cadena.
Si la primera y la última letra difieren, entonces la cadena no es un palíndromo.
De lo contrario, la primera y la última letra son la misma y continuar con siguiente carácter y el penúltimo. 


