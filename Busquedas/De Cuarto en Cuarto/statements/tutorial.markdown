Este problema lo podemos resolver probando con todas las posibilidades.

Supongamos que nos encontramos en el cuarto $x$. Si $x=y$, terminamos. De lo contrario, probamos con movernos a las dos habitaciones adyacentes en alg�n orden (en caso de ser posible) y proceder de manera recursiva.

Si al avanzar hacia alguna de las habitaciones adyacentes, no logramos llegar a la casilla de la meta (con ayuda de una variable global podremos saber si logramos llegar en alg�n momento) entonces regresamos a la casilla $x$ desde la cual partimos.

Sin embargo, antes de movernos a los cuartos siguientes, hay que checar que no hayamos llegado a la soluci�n con anterioridad, ya que de lo contrario, debemos ignorar cualquier movimiento.

De igual manera, si ya visitamos un cuarto con anterioridad, es claro que no queremos volver a visitarlo, por lo que necesitamos checarlo con ayuda de un arreglo auxiliar (global).

Tomando en cuenta todas estas consideraciones, la soluci�n deber�a lucir m�s o menos de la siguiente manera.

    bool use[100010], done = false;

    void Player1(int x, int y){
        if (x == y){
            done = true;
            return;
        }
        use[x] = true;

        /** Probamos (si es posible) movernos a las dos posiciones**/
        int v1 = siguienteCuarto(1), v2 = siguienteCuarto(2);

        /**Checamos que no hayamos visitado el cuarto antes y no hayamos llegado ya a la solucion**/
        if (!use[v1] && !done){
            move(v1); //Nos movemos al cuarto
            Player1(v1, y); //Procedemos recursivamente
            if(!done) regresa(); //Si este camino no conducia a la solucion, regresamos
        }

       if (!use[v2] && !done){
            move(v2);
            Player1(v2, y);
            if(!done) regresa();
       }

       return;

}

Esta manera de resolver problemas de manera exhaustiva se le conoce como **B�squeda en Profundidad**.
