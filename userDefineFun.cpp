#include <iostream>
using namespace std;

// Function declarations
void helloWorld();
void addTwoNum(int fNum, int lNum);

// Main function
int main () {
    // helloWorld();
    addTwoNum(10, 20);

    return 0;
}

// Function definition
void helloWorld () {
    cout << "Hello world" << endl;
}

void addTwoNum(int fNum, int lNum) {
    cout << "Your result is: " << fNum + lNum << endl;
}