#Resolviendo - Recuérdame

**Recuérdame** es un problema interactivo el cual te ayudará a saber el funcionamiento de los mismos. Este es uno de los problemas más sencillo que solo nos ayudan introducirnos a los problemas **INTERACTIVOS**.

#Explicación
**Paso 1.-** Además de leer bien las indicaciones del problema que vas a resolver, debes de descargar la plantilla para poder llamarla desde tu solución.

!{Descarga de Plantilla}(plantilla.jpg)

**Paso 2.-** Ahora descomprimimos la carpeta del proyecto para poder estar trabajando con nuestra solución.

!{Contenido de la Carpeta}(contenidoplantilla.jpg)

**Paso 3.-** Construcción de la Solución. Para iniciar de forma correcta debemos incluir el archiv que descargamos:

    #include"Recuerdame.h"

Como se indica en las instrucciones, el problema evaluará dos funciones en específico:

    void recuerdame(int num);
    bool soy(int x);

Con `recuerdame` solo vamos a introducir el número que debe de recordar, por eso es de tipo **void**, por otro lado la función **soy** ademas de que le enviamos un parámetro es de tipo **bool** ya que regresa un **true** o **false**.

    #include"Recuerdame.h"

    int k;

    void recuerdame(int num)
    {
         k=num;
    }

    bool soy(int x)
    {
         if(k==x)
             return true;

         return false;
    }
