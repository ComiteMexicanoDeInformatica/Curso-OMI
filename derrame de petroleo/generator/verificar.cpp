#include <bits/stdc++.h>

using namespace std;

#include <fstream>
#include <sstream>

#define NUM_CASOS 42

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    string line,str;
    ostringstream temp;

    for (int x=0; x<NUM_CASOS; x++)
    {
        temp<<x;
        str=temp.str();
        cout << str << endl;
        str="";
        // ifstream myfile (temp);
        //+".in";
        // if (myfile.is_open())
        // getline (myfile,line);
        // cout << line;
        // myfile.close();
    }

    return 0;
}
