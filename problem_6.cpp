#include <iostream>
using namespace std;

class MyClass {
public:
    void pointerAdd() {
        cout << "Address of this pointer: " << this << endl;
    }
};

int main() {
    MyClass obj1, obj2;

    obj1.pointerAdd();
    obj2.pointerAdd();

    return 0;
}
