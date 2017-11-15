#include <iostream>
#include <time.h>
#include <random>
#include <fstream>
#include <sstream>

using namespace std;
char car;
ofstream in;
ofstream out;

int caracteresEntrada(){
    if(rand()%3 == 0){
        return rand()%10+48;
    }
    else if(rand()%3 == 1){
        return rand()%26+65;
    }
    else{
        return rand()%26+97;
    }
}

int fValLocal()
{
  //cout << char(car + 2) << endl;
  out<<char(car+2)<<endl;
  char car;
  car = caracteresEntrada();
  in<<car<<endl;
  //cout << ++car << endl;
  out<<++car<<endl;
  return car-1;
}

void fValGlobal()
{
  //cout << car << endl;
  out<<car<<endl;
}

int main()
{
  srand(time(NULL));
  for(int n=0;n<20;++n){
      stringstream ss;
      ss << n+1;
      string str = ss.str();
      in.open(str+".in");
      out.open(str+".out");
      car = caracteresEntrada();
      in<<car<<" ";
      {
       char car;
       car = caracteresEntrada();
       in<<car<<" ";
       //cout << car << endl;
       out<<car<<endl;
       fValGlobal();
       fValLocal();
      }
      //cout << ++car << endl;
      out<<++car<<endl;
      out.close();
      in.close();
  }
  return 0;
}
