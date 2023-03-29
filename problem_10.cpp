#include <iostream>

using namespace std;

int Sum(int a, int b) {
    return a + b;
}

int Sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers: " << Sum(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers: " << Sum(num1, num2, num3) << endl;

    return 0;
}
