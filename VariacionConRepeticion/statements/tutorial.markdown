En este problema tenemos que primero hacer 2 observaciones.

1.-Nuestro limite de permutaciones es $10^{18}$  .

2.-Eso no cabe en un $int$ ( $2^{32} < 10^{18} $) asi que empezaremos por usar nuestras variables $ long$ $long$ $int $ .

Nos piden la $j$-sima cadena en orden lexicográfico, como podemos saber nuestro número de cadena?

Sabemos  que existen $n^k$ formas de acomodar la cadena. Empezemos por una observacion, en el caso de que $n= 2$ $y$  $k=2$ , tenemos los siguientes arreglos

$aa$ =1

$ab$ =2

$ba$ =3

$bb$ =4

Podemos notar que en binario también las podemos representar como:

$00$ =1

$01$ =2

$10$ =3

$11$ =4

Notaste la equivalencia? Sea $n$ nuestra base , solo tenemos que encontrar como representar el número $j$ en esa base.

$k$ sencillamente nos esta diciendo el número máximo que podemos representar usando esos espacios osea $n^k$.
Claro, lo unico que falta es cuando ya tenemos la representación de el número $j$  en la base $n$ , es  a el caracter "$a$" en la posicioón $k_i$ sumarle ese número.  ($a +2=c$).
