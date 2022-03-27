El metodo de ordenamiento por burbuja (por si aun no te imaginas como puede verse, es asi)
![Burbuja](burbuja.gif)

entonces simplemente tenemos que hacer 2 ciclos anidados ( ya que el movimiento 1 nos garantiza que un número estara ordenado ( el ultimo)) lo haremos N veces
para asegurarnos que funciones.

    int inicio(int n)
    {
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n-1;j++)
    {
    if(pregunta(j)>pregunta(j+1))
    {
    cambia(j);
    }
    }
    }
    return 0;
    }
