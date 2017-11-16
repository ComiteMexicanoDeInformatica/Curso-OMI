#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 6
using namespace std;
int lanzaDado()
{
  srand(time(NULL));
  int random=1+ rand()%MAX_NUM;
  return random;
}
int main()
{
  cout<<lanzaDado()<<endl;
  return 0;
}
