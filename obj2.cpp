#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;
    string food;
    bool canFly;

    void displayName() {
        cout << name << endl;
    }

    void displayFood() {
        cout << name << " eats " << food << endl;
    }

    void displayCanFly() {
        if (canFly) {
            cout << name << " can fly" << endl;
        } else {
            cout << name << " cannot fly" << endl;
        }
    }
};

int main() {
    Animal cow;
    cow.name = "Cow";
    cow.food = "grass";
    cow.canFly = false;

    cow.displayName();
    cow.displayFood();
    cow.displayCanFly();

    return 0;
}
