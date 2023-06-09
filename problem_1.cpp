#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    void setLength(float l) {
        length = l;
    }
    void setWidth(float w) {
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
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    cout << "Area: " << rect.getArea() << endl;
    return 0;
}
