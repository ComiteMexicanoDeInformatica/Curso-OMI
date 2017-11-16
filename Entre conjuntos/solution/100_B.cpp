#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[10], b[10];

bool greaterThanA(int t){
    for (int i=0; i<n; i++)
        if (t%a[i] != 0)
            return false;
    return true;
}

bool smallerThanB(int t){
    for (int i=0; i<m; i++)
        if (b[i]%t != 0)
            return false;
    return true;
}

int int main() {
    cin >> a >> b;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<m; i++)
        cin >> b[i];

    int i = *max_element(a, a+n);
    int j = *min_element(b, b+m);

    for (i; i <= j; i++){
        if(greaterThanA(i) && smallerThanB(i))
            cout << i << ' ';
    }
}
