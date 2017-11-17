#include"Recuerdame.h"
int k;
void recuerdame(int num)
{
  k=num;
}

bool soy(int x)
{
  if(k==x) {
    return true;
  } else {
    return false;
  }
}
