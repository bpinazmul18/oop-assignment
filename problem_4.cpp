#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float getPerimeter() {
        return 2 * (length + width);
    }

    float getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 3);
    
    cout << rect.getPerimeter() << " = Perimeter" << endl;
    cout << rect.getArea() << " = Area" << endl;

    return 0;
}
