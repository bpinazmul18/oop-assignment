#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class BabyDog : public Dog {
public:
    void weep() {
        cout << "Babydog is weeping." << endl;
    } 
};

int main() {
    BabyDog myDog;

    myDog.eat();
    myDog.bark();
    myDog.weep();

    return 0;
}
