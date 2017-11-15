#include <iostream>

using namespace std;
char car;

void fValLocal()
{
  cout << char(car + 2) << endl;
  char car;
  cin >> car;
  cout << ++car << endl;
}

void fValGlobal()
{
  cout << car << endl;
}


int main()
{
  cin >> car;
  {
   char car;
   cin >> car;
   cout << car << endl;
   fValGlobal();
   fValLocal();
  }
  cout << ++car << endl;
  return 0;
}
