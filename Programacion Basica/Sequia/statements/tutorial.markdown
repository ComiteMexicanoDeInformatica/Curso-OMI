En este problema, nos preguntarán usando el pronóstivo de lluvias para predecir cuando un tanque de agua se llenará. Lo que vamos a hacer es mantener un registro de los niveles del tanque de agua, antes de mencionar los comandos `break` y `continue` que nos ofrece mucho control en los ciclos.

# Simulando el nivel de agua del tanque (I)

La redacción del problema es muy clara. Cada día hay un pronóstico que nos da la cantidad de agua que cae dentro del tanque. Así obtendremos el día en que se llena el tanque (y nos prometen que siempre se llenará) como nuestra respuesta.

Tal como los problemas anteriores, en los cuales teníamos que calcular el promedio de muchos números, aquí necesitamos una variable para guardar el total de agua que hay en el tanque. Por ejemplo:

total_lluvia = 0;
for (int dia = 1; dia <= N; dia++) {
<leer un número entero y guardarlo en lluvia_actual>
total_lluvia += lluvia_actual;
}

Tenemos un poco de experiencia al escribir ciclos, ahora debe de estar claro como funciona el código anterior. Para cada suma, **total_lluvia** contendrá el valor correcto correspondiente a ese día.

A partir de aquí sólo hay que checar que el tanque se llene:

total_lluvia = 0;
for (int dia = 1; dia <= N; dia++) {
<leer un número entero y guardarlo en lluvia_actual>
total_lluvia += lluvia_actual;
if (total_lluvia >= capacidad_tanque) {
// El tanque se llenó
}
}

Sin embargo no es exactamente lo que nos está solicitando el problema. Necesitamos encontrar cuantos días tienen que pasar para que el tanque se llene. (O sea, necesitamos encontrar cual es el primer día en que el tanqué estará lleno). Usando el comando `if` de arriba, hay muchas formas de llegar a eso. La mejor forma de llegar es usando el comando `break`.

# Comandos `break` y `continue`

(Nota: en esta sección se discutirá específicamente sobre los comandos `break` y `continue` como se usan en C/C++. Sin embargo, la descripción que se dará aquí aplica a la gran mayoría de los lenguajes de programación permitidos en la OMI. Si no estás seguro de que lenguaje usarás, consulta un libro o a tu asesor).

Algunas veces cuando usamos ciclos, el código de adentro del ciclo se vuelve muy grande. En algunas ocasiones durante la ejecución del ciclo, no queremos que el resto del código de adentro del ciclo, se ejecute. Usualmente es posible hacerlo con el comando `if` y variables extras. Afortunadamente, muchos lenguajes permiten controlar más limpiamente el flujo del ciclo.

- El comando `break` se coloca en determinado lugar dentro del ciclo (normalmente dentro de un comando `if`). Así se le indica a la computadora que detenga lo que está haciendo, se salga del ciclo, y continue con el resto del programa.

El dibujo de arriba ilustra como funciona el ciclo `while`. La mayoría de las veces, el cclo se comportará de manera normal, verificando la condición que le dimos hasta que no sea verdadera. Pero si se encuentra el comando `break`, la computadora se detendrá inmediatamente y saltará hasta el código después del ciclo

El siguiente código ejemplo muestra en acción el comando `break`

for (int i = 1; i <= 10; i++) {
printf("Inicio de la iteración %d.",i);
if (i == 3) {
break;
}
printf("Fin de la iteración %d.",i);
}

Ignorando el código interior, lo que hace el ciclo es contar de 1 a 10. La primera vez que se ejecuta, i = 1 y el comando `break` no se ejecuta. Ambas llamadas a `printf` no serán interrumpidas con la segunda línea.

La tercer línea se ejecuta, y la computadora muestra 'Inicio de la iteración 3' como se espera. Entonces se verifica lo del comando `if`. Porque (i == 3) ahora es verdadero, el comando `break` se ejecuta y la computadora saldrá del ciclo sin imprimir 'Fin de la iteracción 3'. Ninguno de los otros números del 4 al 10, ni siquiera se logran alcanzar.

(Podrías tratar de compilar y correr ese código para ver que salida se obtiene. Asegúrate de entender como trabaja).

- El comando `continue` también pude colocarse en algún lugar dentro del ciclo. Le dice a la computadora que se detenga donde va e independientemente de lo que esté haciendo, salte de regreso al principio del código interior del ciclo, que también puede ser ejecutado con una actualizació (por ejemplo, i++).

La mejor forma de ser ilustrado será con otro ejemplo. El siguiente código muestra todos los números impares del 1 al 10:

for (int i = 1; i <= 10; i++) {
if (i % 2 == 0) { // si i es par
continue;
}
printf("%d",i);
}

Como funciona lo anterior? Cada vez que la computadora entra dentro del ciclo, **i** es impar o par:

- Si **i** es impar, el comando `continue` se ignora. La computadora continúa como usualmente lo haría: muestra el valor, incrementa **i** (así es como funciona `i++`), y de nuevo se verifica la condición
- Si es par, el comando `continue` se ejecuta. La computadora se salta todo en el ciclo (incluyendo `printf`, así que nada se muestra), se incrementa **i** (eso es lo que hace `i++`), y otra vez se evalua la condición.

De nuevo, compila este código y asegúrate de entender como funciona. Al final sólo los números impares, que están en el rango, son desplegados. Claro que podríamos hacer lo mismo reemplazando el código interno con "if i es impar, muéstralo". Pero en muchos casos, el uso de `continue` es más conveniente y fácil de leer.

# Simulando el nivel de agua del tanque (II)

Vamos a regresar a nuestra simulación de la lluvia. Pero antes observa que lo que deseamos encontrar es cuál es el primer día en que el tanque está lleno. Tan pronto que el tanque esté lleno, vamos a utilizar ese número de día para mostrarlo, y finalizar la simulación (es decir, salir del ciclo).

Ésto nos lleva al comando `break`. Una vez que la lluvia llena el tanque, le indicaremos a la computadora que muestre ese número de los días que tuvieron que transcurrir, antes de utilizar el comando `break` para finalizar el ciclo. Nuestro código podría ser algo parecido a lo siguiente:

total_lluvia = 0;
for (int dia = 1; dia <= N; dia++) {
<leer un número entero y guardarlo en lluvia_actual>
total_lluvia += lluvia_actual;
if (total_lluvia >= capacidad_tanque) {
// El tanque se llenó
<moestra el valor del día>
break;
}
}

Así finalizamos la simulación. Hay muchas formas para terminar el ciclo, pero esta es la más simple. Utilizando el código como el anterior, podrás solucionar satisfactoriamente al problema de **Sequía**
