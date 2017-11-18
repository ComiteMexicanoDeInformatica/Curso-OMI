#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

struct tar {
    int a, b;
};
queue<tar> troy;

int main()
{
    ios_base::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    tar c;

    for(int i = 0; i < a; i++) {
        cin >> c.a >> c.b;
        troy.push(c);
    }

    while(!troy.empty()) {
        c = troy.front();
        c.b -= b;
        if(c.b <= 0) {
            cout << c.a << endl;
        }
        else {
            troy.push(c);
        }
        troy.pop();
    }
}
