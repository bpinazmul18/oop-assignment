#include <iostream>
using namespace std;

int main () {
    int a = 5, b = 6;

    if (a > b && ++b >> a) {
        cout << b;
    }
    return 0;
}