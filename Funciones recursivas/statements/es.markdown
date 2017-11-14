Funciones Recursivas
===================
La *recursión* es una herramienta de programación maravillosa, provee una forma simple y poderosa de abordar  una variedad de problemas. Con frecuencia es dificil, de todo modos, para ver como abordar recursivamente un problema; puede ser difícil "pensar" recursivamente. También es facíl escribir un programa recursivo  que tarda demasiado tiempo en ejecutarse o no termina en absoluto. En este artículo repasaremos los conceptos básicos de la recursión y esperamos que te ayude a desarrollar o perfeccionar una habilidad de programación muy importante.

#¿Qué es la recursión?
Para poder definir exactamente lo que es la recursión, primero necesitamos responder la pregunta "¿Qué es la recursión?" Basicamente, decimos que una función es recursiva si se llama a si misma. A continuación se muestra un pseudocódigo para una función recursiva que imprime la frase "Hola Mundo!" $n$ veces:

```
function HolaMundo(n)
{
    if(n<1)return
    print("Hola Mundo!")
    HolaMundo(n - 1)
}
```

Puede que en no esté claro  qué estamos haciendo aquí, así que explicaremos que está sucediendo, si llamamos a nuestra función con $n=10$. Dado que $n$ no es menor que $1$, no hacemos nada en la primera línea. En la siguiente línea, imprimimos "Hola Mundo!" Una vez. En este punto, necesitamos imprimir nuestra frase 9 veces más. Como ahora tenemos una función *HolaMundo* que puede hacer eso, simplemente llamamos a *HolaMundo* (esta vez con $n=9$) para imprimir las copias restantes. Esa copia de *HolaMundo* imprimirá la frase una vez, y luego llamará a otra copia de *HolaMundo* para imprimir los 8 restantes. Esto continuará hasta que finalmente llamemos a *HolaMundo* con $n=0$. *HolaMundo(0)* no hace nada; solo ejecuta el return (es decir regresa). Una vez que *HolaMundo(0)* ha finalizado, *HolaMundo(1)* también se ejecuta y regresa. Esto continúa hasta nuestra llamada original de *HolaMundo(10)*, que termina de ejecutarse habiendo impreso $10$ veces "Hola Mundo!"

Puedes estar pensando que esto no es muy emocionante, pero esta función demuestra algunas consideraciones clave en el diseño de un algoritmo recursivo

1. **Maneja un "caso base" simple sin usar recursión.** 

En este ejemplo, el caso base es *"HolaMundo(0)"*; si se le pide a la función que imprima cero veces "Hola Mundo!", regresa sin generar más llamadas a la función "HolaMundo".

2. **Evita ciclos infinitos.**

Imagina si "HolaMundo(10)" llamó a "HolaMundo(10)" que llamó "HolaMundo(10)". Terminas con un ciclo infinito de llamadas, y esto normalmente daría como resultado un error de "desbordamiento de pila" al ejecutar. En muchos programas recursivos, puedes evitar ciclos haciendo que cada llamada de función sea para un problema que de alguna manera es más pequeño o más simple que el problema original. En este caso, por ejemplo, el valor de $n$ será cada vez más pequeño en cada llamada. A medida que el problema se vuelve más simple y simple (en este caso, consideraremos que es "más simple" imprimir algo cero veces en lugar de imprimirlo 5 veces) eventualmente llegará al "caso base" y se detendrá la recursión. Hay muchas maneras de evitar ciclos infinitos, pero asegurarse de que estamos tratando con problemas cada vez más pequeños o más simples es una buena regla general.

3. **Cada llamada de la función representa un manejo completo de la tarea dada.**

A veces, la recursión puede parecer mágica en la forma en que descompone los grandes problemas. Sin embargo, no existe el almuerzo gratis. Cuando a nuestra función se le da un argumento de 10, imprimimos "Hola Mundo!" Una vez y luego lo imprimimos 9 veces más. Podemos pasar una parte del trabajo junto con una llamada recursiva, pero la función original todavía tiene que dar cuenta de las 10 copias de alguna manera.

#¿Por qué usar recursión?#
El problema que ilustramos anteriormente es simple, y la solución que escribimos funciona, pero probablemente habría sido mejor simplemente usar un ciclo en lugar de la recursión. Donde la recursión tiende a brillar es en situaciones donde el problema es un poco más complejo. La recursión se puede aplicar a casi cualquier problema, pero hay ciertos escenarios para los cuales la encontrarás particularmente útil. En lo que resta de este artículo, analizaremos algunos de estos escenarios y, a lo largo del camino, discutiremos algunas ideas centrales más para tener en cuenta al usar la recursión.

**Escenario n.º 1: Jerarquías, redes o gráfos**

En la discusión de algoritmos, cuando hablamos de un gráfo, generalmente no hablamos de un gráfico que muestra la relación entre variables. Por el contrario, generalmente estamos hablando de una red de cosas, personas o conceptos que están conectados entre sí de varias maneras. Por ejemplo, un mapa de carreteras podría considerarse como un gráfo que muestra ciudades y cómo están conectadas por carreteras. Los gráfos pueden ser grandes, complejos e incómodos de manejar programáticamente. También son muy comunes en la teoría de algoritmos y las competicias de algoritmos. Afortunadamente, trabajar con gráfos puede simplificarse mucho más si se utiliza la recursión. Un tipo común de gráfo es una jerarquía, un ejemplo de lo cual es el organigrama de una empresa:

![enter image description here][1]


  [1]: data:image/png;base64,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

------------------
Name     |Manager 
---------|--------
Betty 	 |Sam   
Bob      |Sally
Dilbert  |Nathan
Joseph   |Sally 
Nathan   |Veronica
Sally    |Veronica
Sam      |Joseph
Susan    |Bob
Veronica |

-------------------
En este gráfo, los objetos son personas, y las conexiones en el gráfo muestran quién informa a quién en la empresa. Una línea ascendente en nuestro gráfo dice que la persona que está más abajo en el gráfo informa a la persona que está sobre ellos. En la tabla de arriba vemos cómo esta estructura podría representarse en una base de datos. Para cada empleado, registramos su nombre y el nombre de su gerente (y a partir de esta información podríamos reconstruir toda la jerarquía si fuera necesario, ¿ves cómo?).

Ahora supongamos que tenemos la tarea de escribir una función como la siguiente **"contarEmpleadosAbajo(empleadoNombre)"**. Esta función está destinada a decirnos cuántos empleados informan (directa o indirectamente) a la persona nombrada por **empladoNombre**. Por ejemplo, supongamos que llamamos **"contarEmpleadoAbajo('Sally')"** para averiguar cuántos empleados reportan a Sally.

Para comenzar, es bastante simple contar cuántas personas trabajan directamente debajo de ella. Para hacer esto, recorremos cada registro de la base de datos, y para cada empleado cuyo gerente es Sally, incrementamos una variable de contador. Implementando este enfoque, nuestra función devolvería un conteo de 2: Bob y Joseph. Este es un comienzo, pero también queremos contar a personas como Susan o Betty, que son las más bajas en la jerarquía, pero que informan a Sally indirectamente. Esto es incómodo porque cuando se mira el registro individual de Susan, por ejemplo, no está inmediatamente claro cómo está involucrada Sally.

Una buena solución, como habrás adivinado, es usar recursividad. Por ejemplo, cuando encontramos el registro de Bob en la base de datos, no solo incrementamos el contador en uno. En cambio, aumentamos en uno (para contar a Bob) y luego lo incrementamos en función del número de personas que informan a Bob. ¿Cómo averiguamos cuántas personas se reportan a Bob? Usamos una llamada recursiva a la función que estamos escribiendo: **"contarEmpleadoAbajo('Bob')"**. Aquí hay un pseudocódigo para este enfoque:

```
function contarEmpleadoAbajo(empleadoNombre)
{
    declare variable contador
    contador = 0
    for each persona in empleadoBasedatos
    {
        if(persona.manager == empleadoNombre)
        {
            contador = contador + 1
            contador = contador + contarEmpleadoAbajo(persona.nombre)
        }
    }
    return contador
}
```

Si eso no está muy claro, lo mejor es intentar seguir mentalmente linea-por-linea la ejecucción de nuestra función. Recuerde que cada vez que realiza una llamada recursiva, obtiene una copia nueva de todas sus variables locales. Esto significa que habrá una copia separada del contador para cada llamada. Si ese no fuera el caso, realmente habría problemas cuando establecemos el contador a cero al comienzo de la función. Como ejercicio, considere cómo podríamos cambiar la función para incrementar una variable global en su lugar. Sugerencia: si estuviéramos incrementando una variable global, nuestra función no necesitaría devolver un valor.

**Declaraciones de misión**

Una cosa muy importante a considerar cuando se escribe un algoritmo recursivo es tener una idea clara de la "declaración de misión" de nuestra función. Por ejemplo, en este caso, he supuesto que una persona no debe contarse como reportándose a sí misma. Esto significa que **"contarEmpleadosAbajo('Betty')"** devolverá cero. Así, la declaración de misión de nuestra función podría ser "Devolver el conteo de personas que informan, directa o indirectamente, a la persona nombrada en empleadoNombre, sin incluir a la persona llamada **empleadoNombre**".

Pensemos en lo que debería cambiar para que una persona cuente como reportándose a sí misma. En primer lugar, lo que tendríamos que hacer si no hay personas que informan a alguien, devolvamos uno en lugar de cero. Esto es simple: simplemente cambiamos la línea **"contador = 0"** a **"contador = 1"** al comienzo de la función. Esto tiene sentido, ya que nuestra función tiene que devolver un valor 1 más alto que antes. Una llamada a **"contarEmpleadosAbajo('Betty')"** ahora devolverá 1.

Sin embargo, debemos ser muy cuidadosos aquí. Cambiamos la declaración de misión de nuestra función, y cuando trabajamos con recursividad eso significa que debemos observar de cerca cómo estamos usando la llamada de manera recursiva. Por ejemplo, "contarEmpleadosAbajo('Sam')" ahora daría una respuesta incorrecta de 3. Para ver por qué, sigue el código: Primero, contaremos a Sam como 1 al establecer el contador en 1. Luego, cuando nos encontremos con Betty, La contaré como 1. Luego, contaremos los empleados que se reportan con Betty, y eso también devolverá 1 ahora.

Está claro que estamos contando doblemente a Betty; la "declaración de misión" de nuestra función ya no coincide con la forma en que la estamos usando. Necesitamos deshacernos de la línea **"contador = contador + 1"**, reconociendo que la llamada recursiva ahora contará a Betty como "alguien que informa a Betty" (y por lo tanto no necesitamos contarla antes de la llamada recursiva).

A medida que nuestras funciones se vuelven cada vez más complejas, los problemas con "declaraciones de misión" ambiguas se vuelven cada vez más evidentes. Para hacer que la recursividad funcione, debemos tener una especificación muy clara de lo que está haciendo cada llamada a la función  o, de lo contrario, podemos terminar con algunos errores muy difíciles de depurar. Incluso si el tiempo es limitado, a menudo vale la pena comenzar escribiendo un comentario que detalle exactamente qué se supone que debe hacer la función. Tener una "declaración de misión" clara significa que podemos estar seguros de que nuestras llamadas recursivas se comportarán como esperamos y que la imagen completa se combinará correctamente.
