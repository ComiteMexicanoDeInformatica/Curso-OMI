Nivel IPO
=========

En este primer nivel (*Inputs, Process, Outputs*) ya deberías poder
resolver retos interactivos elementales que reciben entradas, realizan
procesos simples (fórmulas) y emiten salidas. Esto implica una buena
comprensión de los siguientes conceptos:

* Tipos de datos
* Primitivos
* Numéricos
* Enteros
* Reales
* Alfanuméricos
* Caracteres
* Cadenas
* Booleanos
* Derivados
* Arreglos
* Referencias
* Apuntadores
* Expresiones (precedencia y asociatividad)
* Sentencias

### Enunciado 1

Dado un entero positivo $n$, calcula la suma de todos los enteros desde
1 hasta $n$.

### Análisis 1

Puedes aprovechar la suma de Gauss para hacer un código elemental de
tipo interactivo.
$$1+2+3+\cdots+(n-1)+n=\sum_{i=1}^{n}i=\frac{n(n+1)}{2}$$

Realizar este programa con un bucle *no* es una buena idea:

      unsigned int sum = 0;
      for(unsigned int i = 1; i <= n; ++i) {
        sum += i;
      }

El bucle es más complejo (costoso) que la fómula directa.

### Solución 1

    #include<iostream>
    int main() {
      using namespace std;
      cout << "Valor de N: ";
      unsigned int n;
      cin >> n;
      unsigned int sum = n * (n + 1) / 2;
      cout << "La suma es " << sum << '\n';
      return 0;
    }

Nivel SCIB
==========

El segundo nivel abarca las estructuras de control de flujo, con las que
aumenta mucho tu poder de cómputo.

* Secuencia
* Condición
* Iteración
* Bifurcación

### Enunciado 2

Para cada entero positivo $n$ de la entrada, imprime el número de ternas
pitagóricas primitivas cuyos lados no excedan $n$.

### Análisis 2

Las siguientes fórmulas producen ternas pitagóricas para cualesquier
$m > n \in \mathbb{Z}^+$; la terna producida será primitiva si y sólo si
$m$ y $n$ son primos relativos de distinta paridad.

$$\begin{align}
a & = & m^2 - n^2 \\\\
b & = & 2mn \\\\
c & = & m^2 + n^2 \\\\
\end{align}$$

El uso del `typedef` al inicio del código facilita el escalamiento de
los tipos de datos.

El cálculo del máximo común divisor (`gcd`) es ideal para expresarlo en
una función aparte.

Formalmente, `goto` no es indispensable porque el cálculo de las ternas
puede enviarse a otra función; con esto `main` quedaría elementalmente
simple:

    int main() {
      integer max;
      while(cin >> max) {
        cout << ppt(max) << '\n';
      }
      return 0;
    }

Sin embargo, el ejemplo ilustra cómo aprovecharlo para salir
selectivamente de una profunda anidación de iteraciones.

El inicializador de `n` (en el segundo `for`) ilustra cómo *construir*
un valor que sea de distinta paridad con respecto a `m`; esto es menos
complejo que correr unitariamente a `n` y preguntar si sus módulos 2 son
distintos.

El primer valor de `c` que pase de `max` no es necesariamente el fin del
proceso; cuando esto suceda en el *primer* valor de `n` para un cierto
`m`, entonces ya podremos estar seguros de que no hay más ternas cuya
hipotenusa no exceda de `max`.

He aquí la versión recursiva el máximo común divisor; sin embargo, la
recursión suele ser más valiosa cuando la implementación iterativa es
muy ardua.

    integer gcd(integer m, integer n) {
      return !b ? a : gcd(b, a % b);
    }

### Solución 2

    #include<iostream>
    #include<algorithm>

    using namespace std;

    typedef unsigned long long int integer;

    integer gcd(integer m, integer n) {
      while(m) {
        if(m < n) {
          swap(m, n);
        }
        m %= n;
      }
      return n;
    }

    int main() {
      integer max;
      while(cin >> max) {
        integer count = 0;
        for(integer m = 2; m <= max; ++m) {
          integer mm = m * m;
          for(integer n = 1 + (m % 2); n <= m; n += 2) {
            if(gcd(m, n) == 1) {
            integer nn = n * n;
            integer a = mm - nn;
            integer b = 2 * m * n;
            integer c = mm + nn;
            if(c <= max) {
              if((a * a + b * b) == (c * c)) {
                ++count;
              }
            } else if(n < 3) {
              goto next;
            }
          }
        }
        next:
        cout << count << '\n';
      }
      return 0;
    }

Nivel ED
========

El tercer nivel implica el uso de estructuras de datos, las cuales son
máquinas que procesan secuencias de datos simples a través de diversos
mecanismos de acceso, recuperación, inserción o eliminación; dominar
este nivel ya te deja en posición de competir en las fases iniciales de
la Olimpiada de Informática.

Hay 2 máquinas básicas (arreglos y listas) a partir de las cuales se
construyen algunas derivadas (vectores, pilas, colas, y árboles).

Arreglos
--------

Son la estructura de datos más simple:

* Datos del mismo tipo y físicamente contiguos en RAM
* Acceso aleatorio (por índice) en tiempo constante
* Inserciones y eliminaciones costosas

Un arreglo estático de $n$ variables
hace que el compilador reserve espacio contiguo en RAM suficiente.

A partir de esto, `a[0]`, `a[1]`, …, `a[n-1]` son variables simples; en
este diagrama, el último valor es `a[2]`.

Aunque técnicamente la expresión `a[-1]` es legal (se trata de los
bytes inmediatamente antecesores a `a[0]`), es
completamente ilegal acceder de cualquier forma a esa variable, ya que
la RAM que le corresponde no ha sido gestionada y se obtendría una
infracción de acceso.

La expresión `a[n]` es legal y corresponde a los bytes inmediatamente
posteriores al último elemento del arreglo. No está
permitido cambiar el estado de esa variable (nuevamente se tendría una
infracción de acceso) pero su dirección (`a+n`) es legal y resulta útil
como el extremo final exclusive para iterar eficientemente sobre el
arreglo.

He aquí cómo adquirir mediante un índice entero los datos de un arreglo
estático:

    const int N = 10;
    float a[N];
    for(int i = 0; i < N; ++i) {
      cin >> a[i];
    }

He aquí cómo recorrer eficientemente el arreglo:

    float *i = a;
    float *end = a + N;
    while(i < end) {
      cout << *i++ << '\n';
    }

Un gran inconveniente de los arreglos es el hecho de que agrandarlos
implica pedir dinámicamente un nuevo bloque de RAM y copiar los datos
del original en el nuevo. Eso es lo que hace un arreglo dinámico como
`vector`:

    vector< float > v;
    float f;
    while(cin >> f) {
      v.push_back(f);
    }

Sin embargo, el recorido sigue siendo análogamente muy eficiente:

    vector< float >::const_iterator i = v.begin();
    while(i != v.end()) {
      cout << *i++ << '\n';
    }

La mayor utilidad de los arreglos está en el manejo de información
multidiminsionada, como las matrices.

### Enunciado 3

Tu entrada es una matriz binaria (de 0’s y 1’s) cuyo tamaño se indica
con dos enteros $r$ y $c$ (renglones y columnas, respectivamente, ambos
entre 1 y 100) seguidos de los bits. Deberás contar cuántas cruces
existen en la matriz; una cruz está formada por cinco 1’s colocados
contiguamente. Por ejemplo, ante la siguiente entrada tu programa
debería contar 3.

    4 7
    0111000
    1111010
    0110111
    0000010

### Análisis 3

Un arreglo bidimensional facilita el acceso arbitrario a cada dato; nota
cómo los ciclos de búsqueda trabajan en $[1,n-1]$; esto facilita el
conteo porque evita tomar consideraciones especiales en los bordes.

### Solución 3

    #include<iostream>

    int main() {
      using namespace std;
      const int MAX = 100;
      int a[MAX][MAX] = { 0 };
      int max_r, max_c, n, r, c;
      char ch;
      if(!(cin >> max_r >> max_c)) {
        return 1;
      }
      if((max_r < 1) || (max_r > MAX)) {
        return 2;
      }
      if((max_c < 1) || (max_c > MAX)) {
        return 3;
      }
      for(r = 0; r < max_r; ++r) {
        for(c = 0; c < max_c; ++c) {
          if(!(cin >> ch)) {
            return 4;
          }
          a[r][c] = (ch == '1');
        }
      }
      int sum, count = 0;
      for(r = 1; r < max_r - 1; ++r) {
        for(c = 1; c < max_c - 1; ++c) {
          sum
            = a[r][c] + a[r+1][c] + a[r-1][c]
            + a[r][c+1] + a[r][c-1]
          ;
          if(sum == 5) {
            ++count;
          }
        }
      }
      cout << count << '\n';
      return 0;
    }

Listas
------

Una lista ligada computacional es una secuencia de nodos (ubicados de
forma arbitraria en RAM) cada uno de los cuales contiene una pieza de
infomación (dato, los cuadrados en el diagrama) y una o más conexiones
hacia otros nodos (los triángulos). Se requiere al menos un punto de
acceso global o enlace al primer dato (que puede ser *tierra* si la
lista está vacía); ése enlace simple (no nodo) aparece en el extremo
izquierdo.

Las listas son ideales para el proceso secuencial de los datos y para
inserciones y eliminaciones arbitarias; en cambio, son linealmente
costosas para el acceso arbitrario del tipo arreglo.

Pueden ser simples o dobles; éstas contienen dos ligas (al anterior y al
siguiente), lo que permite el acceso bidireccional.

Pueden ser lineales o circulares (cuando el último nodo enlaza al
primero), lo facilita el acceso cíclico a una secuencia de datos.

### Enunciado 4

Dada una secuencia de reales imprimir en la salida su desviación
estándar.

### Análisis 4

La desviación estándar discreta se define como la raíz cuadrada de la
varianza de la distribución de probabilidad discreta:

$$s = \sqrt{\frac{\sum_{i=1}^{n}(x_i - \overline{x})^2}{n}}$$

Un cálculo que sólo requiere una pasada (la suma, la media) puede
hacerse *in situ*, por lo que ni siquiera requiere arreglos:

      int count = 0;
      double f, sum = 0;
      while(cin >> f) {
        sum += f;
        ++count;
      }
      if(count) {
        cout << (sum / count) << '\n';
      }

En cambio, la desviación estándar requiere *dos* pasadas: una para
calcular la media y otra para la acumulación de los cuadrados de las
diferencias.

Un lista simple es ideal para este reto porque permite adquirir los
datos en una primera pasada (al mismo tiempo, calcular la media) y
recorrer de nuevo los datos para el cálculo final.

Podría calcularse el tamaño actual de la lista así:

      int sz = lst.size();

Pero esto puede costar (en algunas implementaciones) otra pasada; es
menos complejo contar desde la adquisición.

### Solución 4

    #include<iostream>
    #include<cmath>
    #include<list>

    int main() {
      using namespace std;
      typedef long double real;
      list< real > lst;
      real r, sum = 0;
      int count = 0;
      while(cin >> r) {
        lst.push_back(r);
        sum += r;
        ++count;
      }
      if(count) {
        real mean = sum / count;
        sum = 0;
        list< real >::const_iterator i = lst.begin();
        while(i != lst.end()) {
          r = *i++ - mean;
          sum += r * r;
        }
        cout << sqrt(sum / count) << '\n';
      }
      return 0;
    }

$$\diamond$$

A partir de estas dos estructuras de datos elementales podemos modelar
máquinas de proceso sumamente útiles para el desarrollo de nuestros
algoritmos.

Vectores
--------

Un vector es una generalización del concepto de arreglo. No obstante,
puede implementarse mediante un arreglo dinámico o mediante una lista
ligada; la elección depende del tipo de acceso (secuencial o arbitrario)
que necesitemos.

Por ejemplo, puedes reemplazar todas las ocurrencias de la palabra
`list` por la palabra `vector` en el código anterior sin que su
funcionamiento se vea alterado. Sin embargo, el proceso de lectura de
los datos perderá eficiencia cada vez que el vector alcance el tope de
su capacidad porque antes de poder insertar un nuevo dato será necesario
un proceso de reubicación (*reallocating*).

Analiza el siguiente código en tu sistema local para que comprendas cómo
va reubicándose el arreglo conforme va creciendo; en mi compilador se
reubica los primeros 5 datos y de ahí la capacidad salta así: 6, 9, 13,
19, 28, 42, 63, 94, 141, 211, 316, 474, 711, 1066, etcétera.

    #include<iostream>
    #include<vector>

    int main() {
      using namespace std;
      vector< int > v;
      // v.reserve(1000);
      cout
        << '\t'                 // aún no hay datos
        << v.size() << '\t'     // vector vacío
        << v.capacity() << '\n' // depende del implementador
      ;
      int i;
      while(cin >> i) {
        v.push_back(i);
        cout
          << i << '\t'            // dato
          << v.size() << '\t'     // tamaño actual
          << v.capacity() << '\n' // cómo y cuándo crece
        ;
      }
      return 0;
    }

Para evitar esto puedes descomentar la invocación al método `reserve`;
esto garantiza que no habrá reubicación antes de las primeras 1000
inserciones en nuestro ejemplo.

Los vectores basados en arreglos dinámicos pueden eliminar
eficientemente a su último elemento con el método `pop_back` (siempre y
cuando no esté vacío el vector).

Por último, los vectores hacen simple (aunque no muy eficiente) la
gestión de matrices dinámicas como la del enunciado 3:

    vector< vector < int > > a(
      max_r,
      vector< int >(max_r, 0)
    );

Con esta declaración, `a` es una matriz dinámica (del tamaño exacto) e
inicializada con ceros.

### Enunciado 5

La entrada es un entero que anuncia el número de pares de flotantes que
vienen a continuación y que representan dos vectores paralelos; tu
programa deberá calcular e imprimir el producto punto inverso; es decir,
la suma de los productos del primero del vector izquierdo con el último
del vector derecho, el segundo del vector izquierdo con el penúltimo del
vector derecho; y así sucesivamente hasta el último de vector izquierdo
con el primero del vector derecho. Por ejemplo, con la entrada siguiente
el resultado será 0.6:

    4
    0.1 0.2
    0.3 0.4
    0.5 0.6
    0.7 0.8

### Análisis 5

Como se nos da el tamaño por anticipado, podemos reservar el tamaño de
dos vectores paralelos para reducir a cero las reubicaciones; el proceso
no puede hacerse en una sola pasada porque el vector derecho debe
tomarse en orden inverso.

Nota el uso de los iteradores directos (`const_iterator`) y
reversos(`const_reverse_iterator`) para recorrer eficientemente los
vectores; no se usa el decremento sobre el iterador reverso porque
prevalece la noción de *avanzar* sobre el vector.

### Solución 5

    #include<iostream>
    #include<vector>

    int main() {
      using namespace std;
      int n;
      if(cin >> n) {
        vector< float > v1, v2;
        v1.reserve(n);
        v2.reserve(n);
        float f1, f2;
        while(n-- && (cin >> f1 >> f2)){
          v1.push_back(f1);
          v2.push_back(f2);
        }
        float sum = 0;
        vector< float >::const_iterator i = v1.begin();
        vector< float >
          ::const_reverse_iterator j = v2.rbegin();
        while(i != v1.end()) {
          sum += *i++ * *j++;
        }
        cout << sum << '\n';
      }
      return 0;
    }

Pilas
-----

Una pila es una máquina de datos gobernada por el mecanismo LIFO (*last
in, first out*). Los cuatro métodos relevantes para su gestión son:

* `empty` (estado inicial)
* `push` (inserción)
* `pop` (extracción)
* `top` (copia del valor superior)

No se necesita acceso a ningún dato que no sea el tope.

Las pilas pueden ser eficientemente implementadas con lista ligadas
simples (en las que el enlace principal apunta al tope) o con arreglos
(cuando puede preverse una capacidad máxima). Su propia naturaleza las
hace poco propensas a problemas de fragmentación de memoria.

### Enunciado 6

Dada una secuencia de palabras, imprime en orden inverso de llegada
aquéllas que inicien con mayúscula; ante la entrada
`Alberto y Beatriz fueron a la playa con Carmen` tu programa debería
imprimir `Carmen Beatriz Alberto`.

### Análisis 6

Una pila es la herramienta ideal; sólo falta filtrar lo que se le pone
en ella.

### Solución 6

    #include<iostream>
    #include<locale>
    #include<string>
    #include<stack>

    int main() {
      using namespace std;
      stack< string > s;
      string w;
      while(cin >> w) {
        if(isupper(w[0])) {
          s.push(w);
        }
      }
      while(!s.empty()) {
        cout << s.top() << '\n';
        s.pop();
      }
      return 0;
    }

Colas
-----

Al contrario que las pilas, el mecanismo clave en las colas es FIFO
(*first in, first out*). Pueden ser implementadas mediante listas
ligadas simples o dobles (según el tipo de recorrido que se precise
hacer sobre sus datos).

Los métodos disponibles son los siguientes:

* `empty` (estado inicial)
* `size` (tamaño actual)
* `front` (cabeza)
* `back` (cola)
* `push` (insersión por la cola)
* `pop` (extracción por la cabeza)

El uso de arreglos dinámicos para construir colas eficientes queda
restringido a los casos en que el total de datos encolados no rebase la
capacidad del vector; sin embargo, cuando se dispone del tamaño límite,
los arreglos son muy eficientes para gestionar colas circulares.

### Enunciado 7

Tu programa recibirá una lista de números reales y deberá enviarlos a la
salida aumentados en el absoluto del primer valor negativo que aparezca
en la misma secuencia. Ante una entrada como `1 2 -3 4 5 6` tu programa
debería emitir `4 5 0 7 8 9`.

### Análisis 7

Podríamos leer todos los datos en un `vector` y volverlo a recorrer para
aplicar el desplazamiento numérico, pero el uso de `queue` es más
natural y acorde al proceso que se implementa.

### Solución 7

    #include<iostream>

    int main() {
      using namespace std;
      queue< float > q;
      float f, offset;
      while(cin >> f) {
        q.push(f);
        if(f < 0) {
          offset = f;
          break;
        }
      }
      while(cin >> f) {
        q.push(f);
      }
      while(!q.empty()) {
        cout << (q.front() - offset) << '\n';
        q.pop();
      }
      return 0;
    }

Árboles
-------

Un árbol es un tipo especial de lista doblemente enlazada que contiene
enlaces hacia la izquierda (datos menores que el actual) o hacia la
derecha (datos mayores que el actual). Esta estuctura es muy útil para
implementar los mapas o arreglos asociativos, en lo que el índice no es
necesariamente un entero en [1,n].

### Enunciado 8

Realiza un programa que presente un histograma de las frecuencias de las
palabras de su entrada, ordenadas alfabéticamente.

### Análisis 8

Podemos leer las cadenas en una estructura lineal, ordenarlas y luego
contarlas, pero es mucho más claro (y, en función del exacto desorden de
los datos, generalmente más eficiente) hacer uso de un arreglo
asociativo.

### Solución 8

    #include<iostream>
    #include<string>
    #include<map>

    int main() {
      using namespace std;
      string w;
      map< string, int > m;
      while(cin >> w) {
        ++m[w];
      }
      map< string, int >::const_iterator i = m.begin();
      while(i != m.end()) {
        cout << i->first << '\t' << i->second <<'\n';
        ++i;
      }
      return 0;
    }

$$\diamond$$

Aquí hemos presentado una introducción a las principales estructuras de
datos que te servirán para desarrollar tus algoritmos ante los retos de
la olimpiada.
