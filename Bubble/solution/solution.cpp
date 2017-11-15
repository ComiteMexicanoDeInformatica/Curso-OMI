#include "Bubble.h"


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

