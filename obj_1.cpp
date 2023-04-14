#include <iostream>
using namespace std;

// class Definition
class Student {
    public:
        string name;
        int age;
        string color;
        string sex;

        void eating (string name) {
            cout << name << " " << "is eating." << endl;
        }

        void drink (string name) {
            cout << name << " " << "is drinking." << endl;
        }

        void run (string name) {
            cout << name << " " << "is running." << endl;
        }

};

int main () {
    // Create objects
    Student obj1, obj2;

    obj1.eating("Nazu");
    obj1.eating("Mim");
    obj1.drink("Tarin");
    obj1.run("Dipa");

    return 0;
}