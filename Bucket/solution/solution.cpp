#include"Bubble.h"

int k[110];

void inicio(int n[1000])
{
for(int i=0;i!=1000;i++)
{
k[n[i]]++;
}
}
int pregunta(int x)
{
return k[x];
}
