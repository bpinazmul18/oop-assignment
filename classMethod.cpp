#include <iostream>
using namespace std;

class Student {
    public:
        void printMsg () {
            cout << "Hello world";
        }
};

int main () {
    Student st1;
    st1.printMsg();

    return 0;
}