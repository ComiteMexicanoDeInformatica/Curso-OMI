#Descripción

La crisis financiera intergaláctica está golpeando duro. En estos tiempos económicos pobres, los ingresos de su negocio de comercio de drones apenas son suficientes para sobrevivir. Sin embargo, han escuchado que hay un gran mercado de cuerpos humanos en el planeta Xenu. Después de extensas deliberaciones éticas, ha decidido llevar su nave espacial Serenity al planeta Tierra (que es en su mayoría inofensiva) y saquear a algún ser humano de calidad, un delito grave en La Federación.

El rayo transportador de tu nave espacial es capaz de secuestrar instantáneamente a todos los humanos en una región de W metros de ancho. Convenientemente, los humanos de la Tierra están en una larga fila. Se le da la distancia de cada humano desde el inicio de la línea y el ancho en metros de su rayo transportador. Antes de llevar a cabo su astuta operación de hacer dinero, usted desea escribir un programa para determinar la cantidad máxima de especímenes humanos que puede recolectar con su rayo transportador. Solo tienes una oportunidad de usar tu rayo antes de que la policía intergaláctica comience la persecución. Tenga en cuenta que un ser humano debe estar completamente contenido por el rayo para ser transportado con éxito (por ejemplo, con un rayo de 5 metros de ancho no puede secuestrar a dos humanos que se encuentran exactamente a 5 metros de distancia).

#Restricciones
Para evaluar su solución, los jueces ejecutarán su programa contra varios archivos de entrada diferentes. Todos estos archivos se adherirán a los siguientes límites:


* $1 ≤ N ≤ 100,000$ , la cantidad de humanos que están parados en la línea.

* $1 ≤ W ≤ 1,000,000$ , donde W es el ancho de su barra en metros. 
* $0 ≤ p_i ≤ 1,000,000$ , la distancia (en metros) del i- ésimo humano desde el inicio de la línea. 
Además, $p_i = p_i + 1$ , es decir, la entrada mostrará una lista de los humanos en orden de distancia creciente desde el inicio de la línea y no hay dos humanos que ocupen el mismo espacio.
Como algunos de los casos de prueba serán bastante grandes, es posible que deba pensar qué tan bien su solución escala para valores de entrada más grandes. Sin embargo, no todos los casos serán grandes, en particular:

* Para el 60% de las marcas disponibles, $1 ≤ N ≤ 1000 .$

# Entrada

Tu programa debe leer del archivo. La primera línea de este archivo contendrá dos enteros separados por espacios N y W . Las siguientes N líneas de entrada contendrán un entero $p_i$ : la distancia del $_i$- ésimo ser humano desde el comienzo de la línea.

# Salida

Tu programa debe escribir en el archivo. Su archivo de salida debe contener una línea con un entero: la cantidad máxima de humanos que puede secuestrar con su rayo.

# Ejemplo

||input 
8 4
3
4
7
9
10
20
22
25
||output
3
||description
Hay ocho humanos y tu rayo tiene un ancho 4. Puedes recolectar tres humanos secuestrando a los que están en las posiciones 7, 9 y 10. Este es el número más grande posible. Tenga en cuenta que su viga no es lo suficientemente grande como para recoger los tres en 3, 4 y 7.

||input
6 10
5
9
12
15
17
30
||output
4
||description
Solo hay seis humanos y tu rayo tiene un ancho de 10. Puedes recolectar cuatro humanos secuestrando a los que están en las posiciones 9, 12, 15 y 17.
||end

# Puntaje

La puntuación para cada escenario de entrada será 100% si la respuesta correcta se escribe en el archivo de salida, y 0% de lo contrario.
